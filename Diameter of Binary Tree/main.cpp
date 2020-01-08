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
    int ans = 0;
public:
    int calc_height(TreeNode* root){
        if(!root) return 0;
        int left_height = calc_height(root->left);
        int right_height = calc_height(root->right);
        ans = max(ans, left_height+right_height);
        return max(left_height, right_height) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        calc_height(root);
        return ans;
    }
};

int main()
{
    TreeNode *tree = new TreeNode(3);
    TreeNode *lchild1 = new TreeNode(9);
    TreeNode *rchild1 = new TreeNode(2);
    TreeNode *lchild2 = new TreeNode(5);
    TreeNode *rchild2 = new TreeNode(7);
    tree->left = lchild1;
    tree->right = rchild1;
    rchild1->left = lchild2;
    rchild1->right = rchild2;
    TreeNode *root = convertBST(tree);
    vector<int> ans = inorderTraversal(root);
    for(auto x: ans){
        cout << x << ' ';
    }
    return 0;
}
