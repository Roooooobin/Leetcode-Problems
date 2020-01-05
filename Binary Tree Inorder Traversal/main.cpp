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

//void solve(TreeNode* root, vector<int>& ret)
//{
//    if(!root){
//        return;
//    }
//    solve(root->left, ret);
//    ret.push_back(root->val);
//    solve(root->right, ret);
//}
//
//vector<int> inorderTraversal(TreeNode* root) {
//    vector<int> ans;
//    solve(root, ans);
//    return ans;
//}

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
    TreeNode *tree = new TreeNode(1);
    TreeNode *rchild1 = new TreeNode(2);
    TreeNode *lchild1 = new TreeNode(3);
    tree->right = rchild1;
    rchild1->left = lchild1;
    VI ans = inorderTraversal(tree);
    for(auto x: ans){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
