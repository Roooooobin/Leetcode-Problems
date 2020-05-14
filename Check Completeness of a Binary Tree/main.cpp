#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// leetcode-958 by Robin
bool isCompleteTree(TreeNode* root) {
    // 除了最后一层都必须是满的，且最后一层分布as far left as possible
    if(!root) return true;
    queue<TreeNode*> q;
    q.push(root);
    bool notComplete = false;
    while (true) {
        int size = q.size();
        if (size == 0) {
            break;
        }
        while (size--) {
            TreeNode* cur = q.front();
            q.pop();
            if (cur->right && !cur->left) return false;
            if (notComplete) {
                if (cur->left || cur->right) return false;
            }
            else {
                if (!cur->left || !cur->right) notComplete = true;
            }
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
        }
    }
    return true;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
