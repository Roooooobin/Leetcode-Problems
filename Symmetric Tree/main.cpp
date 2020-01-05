#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isMirror(TreeNode* node1, TreeNode* node2){
    if(!node1 && !node2) return true;
    if(!node1 || !node2) return false;
    return node1->val == node2->val && isMirror(node1->left, node2->right) && isMirror(node1->right, node2->left);
}

bool isSymmetric(TreeNode* root) {
    isMirror(root, root);
}

int main() {
    return 0;
}