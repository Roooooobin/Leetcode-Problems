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
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        if(root && !root->left && !root->right && root->val == sum) return true;
        return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
    }
};

int main()
{
    TreeNode *tree = new TreeNode(1);
    TreeNode *rchild1 = new TreeNode(2);
    TreeNode *lchild1 = new TreeNode(3);
    tree->right = rchild1;
    tree->left = lchild1;
    Solution s;
    cout << s.hasPathSum(tree, 3) << endl;
    return 0;
}
