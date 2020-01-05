#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void preorder(TreeNode* root) {
    if(!root) return;
    cout << root->val << ' ';
    preorder(root->left);
    preorder(root->right);
}

TreeNode* find_rightest_of_left(TreeNode* root) {
    if(!root->left) return root;
    TreeNode* p = root->left;
    while(p && p->right){
        p = p->right;
    }
    return p;
}

void flatten(TreeNode* root) {
    if(!root) return;
    TreeNode* node_rightest_of_left = find_rightest_of_left(root);
    if(node_rightest_of_left == root) node_rightest_of_left->left = root->right;
    else{
        node_rightest_of_left->right = root->right;
    }
    root->right = NULL;
    if(!root->left) return;
    stack<TreeNode*> st;
    st.push(root->left);
    TreeNode* p = root;
    while(!st.empty()) {
        TreeNode *cur = st.top();
        st.pop();
        p->right = cur;
        p->left = NULL;
        p = p->right;
        if (cur->right) st.push(cur->right);
        if (cur->left) st.push(cur->left);
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    TreeNode* node1 = new TreeNode(2);
    TreeNode* node2 = new TreeNode(3);
    TreeNode* node3 = new TreeNode(4);
    TreeNode* node4 = new TreeNode(5);
    TreeNode* node5 = new TreeNode(6);
    root->left = node1;
    node1->left = node2;
    node1->right = node3;
    root->right = node4;
    node4->right = node5;
    flatten(root);
    TreeNode* p = root;
    while(p){
        cout << p->val << endl;
        p = p->right;
    }
    return 0;
}