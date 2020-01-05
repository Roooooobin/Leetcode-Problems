#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void invert(TreeNode* node){
    if(!node) return;
    TreeNode* p = node->left;
    node->left = node->right;
    node->right = p;
    invert(node->left);
    invert(node->right);
}

TreeNode* invertTree(TreeNode* root) {
    invert(root);
    return root;
}

int main() {
    return 0;
}