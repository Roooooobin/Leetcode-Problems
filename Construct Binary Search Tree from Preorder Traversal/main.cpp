#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// leetcode-1008 by Robin
void helper(vector<int>& preoreder, int l, int r, TreeNode* treeNode){
    if(l > r) return;
    int i;
    int root = treeNode->val;
    cout << root << endl;
    for(i=l; i<=r; ++i){
        if(preoreder[i] > root) break;
    }
    if(i > l){
        if(i <= r){
            treeNode->left = new TreeNode(preoreder[l]);
            helper(preoreder, l+1, i-1, treeNode->left);
            treeNode->right = new TreeNode(preoreder[i]);
            helper(preoreder, i+1, r, treeNode->right);
        }
        else{
            treeNode->left = new TreeNode(preoreder[l]);
            helper(preoreder, l+1, r, treeNode->left);
            treeNode->right = NULL;
        }
    }
    else{
        treeNode->left = NULL;
        treeNode->right = new TreeNode(preoreder[l]);
        helper(preoreder, l+1, r, treeNode->right);
    }
}

TreeNode* bstFromPreorder(vector<int>& preorder) {
    TreeNode* root = new TreeNode(preorder[0]);
    helper(preorder, 1, preorder.size()-1, root);
    return root;
}

void solve(TreeNode* root, vector<int>& ret)
{
    if(!root){
        return;
    }
    ret.push_back(root->val);
    solve(root->left, ret);
    solve(root->right, ret);
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    solve(root, ans);
    return ans;
}

int main() {
    vector<int> nodes = {8, 5, 1, 7, 10, 12};
    TreeNode* root = bstFromPreorder(nodes);
    vector<int> pre = preorderTraversal(root);
    for(auto x: pre){
        cout << x << ' ';
    }
    return 0;
}
