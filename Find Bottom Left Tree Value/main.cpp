#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int findBottomLeftValue(TreeNode* root) {
    int left_val = root->val;
    int cnt;
    queue<TreeNode*> q;
    q.push(root);
    while(true){
        cnt = q.size();
        int q_size = q.size();
        if(cnt == 0) return left_val;
        while(cnt){
            TreeNode *cur = q.front();
            q.pop();
            if(cnt == q_size) left_val = cur->val;
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
            cnt--;
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}