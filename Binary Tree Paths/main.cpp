#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void record_path(TreeNode* node, string& path, vector<string>& ans) {
    if(node->left) {
        string path1 = path + string("->") + to_string(node->left->val);
        record_path(node->left, path1, ans);
    }
    if(node->right) {
        string path2 = path + string("->") + to_string(node->right->val);
        record_path(node->right, path2, ans);
    }
    if(!node->left && !node->right) {
        ans.push_back(path);
        return;
    }
}

vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    if(!root) return ans;
    string path = to_string(root->val);
    record_path(root, path, ans);
    return ans;
}

int main() {
    TreeNode* root = new TreeNode(1);
    TreeNode* node1 = new TreeNode(2);
    TreeNode* node2 = new TreeNode(3);
    root->left = node1;
    root->right = node2;
    TreeNode* node3 = new TreeNode(4);
    node1->left = node3;
    vector<string> ret = binaryTreePaths(root);
    for(const auto& x: ret){
        cout << x << endl;
    }
    return 0;
}