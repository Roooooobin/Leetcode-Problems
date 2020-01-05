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
//    solve(root->right, ret);
//    ret.push_back(root->val);
//}
//
//vector<int> postorderTraversal(TreeNode* root) {
//    vector<int> ans;
//    solve(root, ans);
//    return ans;
//}

vector<int> postorderTraversal(TreeNode* root)
{
    vector<int> ans;
    if(!root) return ans;
    stack<TreeNode*> nodes_stack;
    TreeNode *cur = root;
    nodes_stack.push(cur);
    nodes_stack.push(cur);
    while(!nodes_stack.empty()){
        cur = nodes_stack.top();
        nodes_stack.pop();
        //ÉÐÎ´±éÀú×óÓÒ×ÓÊ÷
        if(!nodes_stack.empty() && cur == nodes_stack.top()){
            if(cur->right) nodes_stack.push(cur->right), nodes_stack.push(cur->right);
            if(cur->left) nodes_stack.push(cur->left), nodes_stack.push(cur->left);
        }
        else ans.push_back(cur->val);
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
    VI ans = postorderTraversal(tree);
    for(auto x: ans){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
