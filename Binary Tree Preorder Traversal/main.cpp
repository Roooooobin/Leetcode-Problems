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
//    ret.push_back(root->val);
//    solve(root->left, ret);
//    solve(root->right, ret);
//}
//
//vector<int> preorderTraversal(TreeNode* root) {
//    vector<int> ans;
//    solve(root, ans);
//    return ans;
//}

//vector<int> preorderTraversal(TreeNode* root)
//{
//    stack<TreeNode*> nodes_stack;
//    vector<int> ans;
//    TreeNode *cur = root;
//    while(cur || !nodes_stack.empty()){
//        //if(cur)
//        while(cur){
//            nodes_stack.push(cur);
//            ans.push_back(cur->val);
//            cur = cur->left;
//        }
//        cur = nodes_stack.top();
//        nodes_stack.pop();
//        cur = cur->right;
//    }
//    return ans;
//}

vector<int> preorderTraversal(TreeNode* root)
{
    stack<TreeNode*> nodes_stack;
    vector<int> ans;
    TreeNode *cur = root;
    while(cur || !nodes_stack.empty()){
        while(cur){
            nodes_stack.push(cur);
            if()
            cur = cur->left;
        }
        cur = nodes_stack.top();
        nodes_stack.pop();
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
    VI ans = preorderTraversal(tree);
    for(auto x: ans){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
