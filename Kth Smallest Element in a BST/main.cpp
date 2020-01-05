#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void solve(TreeNode* node, vector<int>& inorder){
    if(!node) return;
    solve(node->left, inorder);
    inorder.push_back(node->val);
    solve(node->right, inorder);
}

int kthSmallest(TreeNode* root, int k) {
    vector<int> inorder;
    solve(root, inorder);
    for(auto x: inorder){
        cout << x << ' ';
    }
    return inorder[k-1];
}

int main() {
    return 0;
}