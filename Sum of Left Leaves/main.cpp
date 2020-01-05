#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sumOfLeftLeaves(TreeNode* root) {
    int val_left = 0, val_right = 0;
    if(!root) return 0;
    if(root->left) val_left = sumOfLeftLeaves(root->left);
    if(root->right) val_right = sumOfLeftLeaves(root->right);
    int val = 0;
    if(root->left && !root->left->left && !root->left->right) val = root->left->val;
    return val + val_left + val_right;
}

int main() {

    return 0;
}