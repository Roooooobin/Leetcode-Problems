#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// flatten to inorder
class BSTIterator {
private:
    vector<int> inorder;
    int idx;
public:
    void inorderTraversal(TreeNode* root) {
        if (root == NULL) return;
        inorderTraversal(root->left);
        inorder.push_back(root->val);
        inorderTraversal(root->right);
    }

    BSTIterator(TreeNode* root) {
        idx = 0;
        inorderTraversal(root);
    }

    /** @return the next smallest number */
    int next() {
        return inorder[idx++];
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return idx < inorder.size();
    }
};

// leetcode-173 by Robin
// stack
class BSTIterator {
private:
    stack<TreeNode*> s;
public:
    BSTIterator(TreeNode* root) {
        addAllLeft(root);
    }

    /** @return the next smallest number */
    int next() {
        TreeNode *cur = s.top();
        s.pop();
        if (cur->right) {
            addAllLeft(cur->right);
        }
        return cur->val;
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !s.empty();
    }

    void addAllLeft(TreeNode* node) {
        while (node) {
            s.push(node);
            node = node->left;
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
