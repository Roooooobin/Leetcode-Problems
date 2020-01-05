#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> levelOrderBottom(TreeNode* root) {
    vector<vector<int>> ans;
    if(!root) return ans;
    queue<TreeNode*> q;
    q.push(root);
    int cnt = 0;
    while(true){
        cnt = q.size();
        if(cnt == 0) break;
        vector<int> res;
        while(cnt--){
            TreeNode* cur = q.front();
            q.pop();
            res.push_back(cur->val);
            if(cur->left) {
                q.push(cur->left);
            }
            if(cur->right) {
                q.push(cur->right);
            }
        }
        ans.push_back(res);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {

    return 0;
}