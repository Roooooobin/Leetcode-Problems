#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<double> averageOfLevels(TreeNode* root) {
    vector<double> ans;
    if(!root) return ans;
    queue<TreeNode*> q;
    q.push(root);
    while(true){
        int cnt = q.size();
        if(!cnt) break;
        double sum = 0.0;
        double len = cnt;
        while(cnt--){
            TreeNode *cur = q.front();
            q.pop();
            sum += cur->val;
            if(cnt == 0) ans.push_back(sum / len);
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
        }
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}