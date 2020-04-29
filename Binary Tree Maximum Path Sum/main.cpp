#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// leetcode-124 by Robin
class Solution {
private:
    int maxSum = INT_MIN;
public:
    int helper(TreeNode* node){
        if(!node) return 0;
        int leftSum = max(0, helper(node->left));
        int rightSum = max(0, helper(node->right));
        maxSum = max(leftSum+rightSum+node->val, maxSum);
        return node->val + max(leftSum, rightSum);
    }

    int maxPathSum(TreeNode* root) {
        helper(root);
        return maxSum;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
