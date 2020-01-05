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

vector<vector<int>> levelOrder(TreeNode* root) {
    if(!root) return vector< vector<int> >{};
    vector< vector<int> > ans;
    queue<TreeNode*> que_nodes;
    que_nodes.push(root);
    while(!que_nodes.empty()){
        vector<int> level_nodes;
        int _size = que_nodes.size();
        while(_size--){
            TreeNode *cur = que_nodes.front();
            que_nodes.pop();
            if(cur->left){
                que_nodes.push(cur->left);
            }
            if(cur->right){
                que_nodes.push(cur->right);
            }
            level_nodes.push_back(cur->val);
        }
        ans.push_back(level_nodes);
    }
    return ans;
}

TreeNode* solve(vector<int>& preorder, int st1, int ed1, vector<int>& inorder, int st2, int ed2)
{
    if(st1 >= ed1 || st2 >= ed2) return NULL;
    int val = preorder[st1];
    int i;
    for(i=st2; i<ed2; i++){
        if(inorder[i] == val) break;
    }
    int dis = i-st2;
    TreeNode *node = new TreeNode(val);
    node->left = solve(preorder, st1+1, st1+1+dis, inorder, st2, st2+dis);
    node->right = solve(preorder, st1+1+dis, ed1, inorder, st2+dis+1, ed2);
    return node;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    if(preorder.size() == 0) return NULL;
    return solve(preorder, 0, preorder.size(), inorder, 0, inorder.size());
}

int main()
{
//    TreeNode *tree = new TreeNode(3);
//    TreeNode *lchild1 = new TreeNode(9);
//    TreeNode *rchild1 = new TreeNode(20);
//    TreeNode *lchild2 = new TreeNode(15);
//    TreeNode *rchild2 = new TreeNode(7);
//    tree->left = lchild1;
//    tree->right = rchild1;
//    rchild1->left = lchild2;
//    rchild1->right = rchild2;
    int a[] = {3, 9, 20, 15, 7};
    int b[] = {9, 3, 15, 20, 7};
    VI pre(a, a+5);
    VI in(b, b+5);
    TreeNode *head = buildTree(pre, in);
    vector<VI> ans = levelOrder(head);
    for(auto v: ans){
        for(auto x: v){
            cout << x << ' ';
        }
        cout << endl;
    }

    return 0;
}
