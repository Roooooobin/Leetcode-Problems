#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// leetcode-108 by Robin
TreeNode* helper(vector<int>& nums, int l, int r){
    if(l > r) return NULL;
    int mid = l + (r - l) / 2;
    TreeNode* node = new TreeNode(nums[mid]);
    node->left = helper(nums, l, mid-1);
    node->right = helper(nums, mid+1, r);
    return node;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    if(nums.empty()) return NULL;
    TreeNode *root = new TreeNode(nums[nums.size() / 2]);
    root->left = helper(nums, 0, nums.size()/2-1);
    root->right = helper(nums, nums.size()/2+1, nums.size()-1);
    return root;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
