#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// leetcode-daily-Check If a String Is a Valid Sequence from Root to Leaves Path in a Binary Tree by Robin
bool helper(TreeNode* node, vector<int>& arr, int idx){
    if(!node) return false;
    if(idx == arr.size()-1){  // last element of the array and is a tree node
        return node->val == arr[idx] && !node->left && !node->right;
    }
    if(node->val != arr[idx]) return false;
    return helper(node->left, arr, idx+1) || helper(node->right, arr, idx+1);
}

bool isValidSequence(TreeNode* root, vector<int>& arr) {
    return helper(root, arr, 0);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
