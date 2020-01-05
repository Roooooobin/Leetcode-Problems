#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>& ret, TreeNode* root, int sum)
    {
        if(!root) return;
        //cout << root->val << endl;
        ret.push_back(root->val);
        if(root && !root->left && !root->right && root->val == sum){
            ans.push_back(ret);
        }
        solve(ans, ret, root->left, sum-root->val);
        solve(ans, ret, root->right, sum-root->val);
        ret.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;
        if(!root) return ans;
        vector<int> v;
        solve(ans, v, root, sum);
        return ans;
    }
};


int main()
{
    TreeNode *tree = new TreeNode(1);
    TreeNode *rchild1 = new TreeNode(2);
    TreeNode *lchild1 = new TreeNode(2);
    tree->right = rchild1;
    tree->left = lchild1;
    Solution s;
    for(auto v: s.pathSum(tree, 3)){
        for(auto x: v){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
