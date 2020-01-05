#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//int minDepth(TreeNode* root) {
//    int min_left, min_right;
//    if(!root) return 0;
//    if(root->left && root->right){
//        min_left = minDepth(root->left);
//        min_right = minDepth(root->right);
//    }
//    else if(root->left && !root->right){
//        min_left = minDepth(root->left);
//        min_right = INT_MAX;
//    }
//    else if(root->right && !root->left){
//        min_right = minDepth(root->right);
//        min_left = INT_MAX;
//    }
//    else{
//        return 1;
//    }
//    return min(min_left, min_right)+1;
//}

int minDepth(TreeNode* root) {
    if(!root) return 0;
    if(!root->left) return 1+minDepth(root->right);
    if(!root->right) return 1+minDepth(root->left);
    return 1+min(minDepth(root->right), minDepth(root->left));
}

int main() {
    return 0;
}