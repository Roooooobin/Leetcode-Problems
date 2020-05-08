#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// leetcode-993 by Robin
bool isCousins(TreeNode* root, int x, int y) {
    if(!root) return false;
    queue<TreeNode*> q;
    int count = 0;  // record nodes count of each level
    q.push(root);
    while(true){
        count = q.size();
        if(count == 0) break;
        bool xIn = false, yIn = false;
        while(count--){
            TreeNode* cur = q.front();
            q.pop();
            if(cur->left && cur->right){
                // same parent
                if(cur->left->val == x && cur->right->val == y || cur->right->val == x && cur->left->val == y){
                    return false;
                }
                q.push(cur->left);
                q.push(cur->right);
            }
            xIn = xIn || (cur->left && cur->left->val == x) || (cur->right && cur->right->val == x);
            yIn = yIn ||(cur->left && cur->left->val == y) || (cur->right && cur->right->val == y);
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
        }
        // on the same level and not with the same parent
        if(xIn && yIn){
            return true;
        }
    }
    return false;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
