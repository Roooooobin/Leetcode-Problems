#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int calc_height(TreeNode* node){
    if(!node) return 0;
    return max(calc_height(node->left), calc_height(node->right)) + 1;
}

bool isBalanced(TreeNode* root) {
    if(!root) return true;
    int height_left = calc_height(root->left);
    int height_right = calc_height(root->right);
    return abs(height_left-height_right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}

int main() {
    return 0;
}