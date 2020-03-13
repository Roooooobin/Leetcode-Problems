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


vector<int> preorderTraversal(TreeNode* root)
{
    stack<TreeNode*> sc;
    vector<int> ans;
    TreeNode *cur = root;
    while(cur || !sc.empty()){
        while(cur){
            ans.push_back(cur->val);
            sc.push(cur);
            cur = cur->left;
        }
        cur = sc.top();
        sc.pop();
        cur = cur->right;
    }
    return ans;
}

vector<int> inorderTraversal(TreeNode* root)
{
    stack<TreeNode*> sc;
    vector<int> ans;
    TreeNode *cur = root;
    while(cur || !sc.empty()){
        while(cur){
            sc.push(cur);
            cur = cur->left;
        }
        cur = sc.top();
        ans.push_back(cur->val);
        sc.pop();
        cur = cur->right;
    }
    return ans;
}

vector<int> postorderTraversal(TreeNode* root)
{
    stack<TreeNode*> sc;
    vector<int> ans;
    TreeNode *cur = root;
    sc.push(cur);
    sc.push(cur);
    while(!sc.empty()){
        cur = sc.top();
        sc.pop();
        if(!sc.empty() && cur == sc.top()){
            if(cur->right) sc.push(cur->right), sc.push(cur->right);
            if(cur->left) sc.push(cur->left), sc.push(cur->left);
        }
        else{
            ans.push_back(cur->val);
        }
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
    VI ans_preorder = preorderTraversal(tree);
    vector<int> ans_inorder = inorderTraversal(tree);
    vector<int> ans_postorder = postorderTraversal(tree);
    for(auto x: ans_preorder){
        cout << x << ' ';
    }
    cout << endl;

    for(auto x: ans_inorder){
        cout << x << ' ';
    }
    cout << endl;

    for(auto x: ans_postorder){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
