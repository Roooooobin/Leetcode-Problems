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

int solve(TreeNode* root, int sum)
{
    int val = sum*10+root->val;
    if(!root->left && !root->right) return val;
    else if(root->left && !root->right) return solve(root->left, val);
    else if(!root->left && root->right) return solve(root->right, val);
    else{
        return solve(root->left, val) + solve(root->right, val);
    }
}

int sumNumbers(TreeNode* root) {
    if(!root) return 0;
    return solve(root, 0);
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
    cout << sumNumbers(tree) << endl;
    return 0;
}
