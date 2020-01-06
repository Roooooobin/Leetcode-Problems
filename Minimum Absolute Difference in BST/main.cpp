#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorderTraversal(TreeNode* root, int& val, int& min_diff){
    if(root->left) inorderTraversal(root->left, val, min_diff);
    if(val >= 0) min_diff = min(min_diff, root->val - val);
    val = root->val;
    if(root->right) inorderTraversal(root->right, val, min_diff);
}

int getMinimumDifference(TreeNode* root) {
    int min_diff = INT_MAX;
    int val = -1;
    inorderTraversal(root, val, min_diff);
    return min_diff;
}

int main() {
    return 0;
}