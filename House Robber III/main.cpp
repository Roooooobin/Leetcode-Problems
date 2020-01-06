#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int solve(TreeNode* root, int& l, int& r){
    if(!root) return 0;
    int ll = 0, lr = 0, rl = 0, rr = 0;
    l = solve(root->left, ll, lr);
    r = solve(root->right, rl, rr);
    return max(root->val+ll+lr+rl+rr, l+r);
}

int rob(TreeNode* root) {
    int l, r;
    return solve(root, l, r);
}

int main() {
    return 0;
}