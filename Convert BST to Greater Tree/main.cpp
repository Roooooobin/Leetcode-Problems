#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorderTraverse(TreeNode* node, vector<int>& values, vector<TreeNode*>& inorderNodes){
    if(!node) return;
    inorderTraverse(node->left, values, inorderNodes);
    values.push_back(node->val);
    inorderNodes.push_back(node);
    inorderTraverse(node->right, values, inorderNodes);
}

TreeNode* convertBST(TreeNode* root) {
    vector<int> values;
    vector<TreeNode*> inorderNodes;
    inorderTraverse(root, values, inorderNodes);
    for(int i=values.size()-2; i>=0; i--){
        values[i] += values[i+1];
    }
    for(int i=0; i<values.size(); i++){
        inorderNodes[i]->val = values[i];
    }
    return root;
}

vector<int> inorderTraversal(TreeNode* root)
{
    stack<TreeNode*> nodes_stack;
    vector<int> ans;
    TreeNode *cur = root;
    while(cur || !nodes_stack.empty()){
        while(cur){
            nodes_stack.push(cur);
            cur = cur->left;
        }
        cur = nodes_stack.top();
        nodes_stack.pop();
        ans.push_back(cur->val);
        cur = cur->right;
    }
    return ans;
}

int main()
{
    TreeNode *tree = new TreeNode(3);
    TreeNode *lchild1 = new TreeNode(9);
    TreeNode *rchild1 = new TreeNode(2);
    TreeNode *lchild2 = new TreeNode(5);
    TreeNode *rchild2 = new TreeNode(7);
    tree->left = lchild1;
    tree->right = rchild1;
    rchild1->left = lchild2;
    rchild1->right = rchild2;
    TreeNode *root = convertBST(tree);
    vector<int> ans = inorderTraversal(root);
    for(auto x: ans){
        cout << x << ' ';
    }
    return 0;
}
