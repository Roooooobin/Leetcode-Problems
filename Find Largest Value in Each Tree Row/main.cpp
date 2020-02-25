#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> largestValues(TreeNode* root) {
    vector<int> ans;
    if(!root) return ans;
    queue<TreeNode*> q;
    q.push(root);
    while(true){
        int cnt = q.size();
        if(!cnt) break;
        int max_ = -INT_MAX;
        while(cnt--){
            TreeNode *cur = q.front();
            max_ = max(max_, cur->val);
            q.pop();
            if(cnt == 0) ans.push_back(max_);
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
        }
    }
    return ans;
}

int main() {
    cout << -INT_MAX << endl;
    cout << INT_MIN << endl;
    return 0;
}