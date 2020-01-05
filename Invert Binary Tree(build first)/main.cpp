#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    TreeNode* left;
    TreeNode* right;
    char elem;
};

TreeNode* build_tree(char* in, char* pre, int length)
{
    if(length==0)
        return NULL;
    TreeNode* node = new TreeNode;
    node->elem=*pre;
    int i=0;
    for(; i<length; i++)
    {
        if(in[i]==*pre)
            break;
    }
    node->left= build_tree(in, pre + 1, i);
    node->right= build_tree(in + i + 1, pre + i + 1, length - i - 1);
    return node;
}

void invert(TreeNode* node){
    if(!node) return;
    TreeNode* p = node->left;
    node->left = node->right;
    node->right = p;
    invert(node->left);
    invert(node->right);
}

TreeNode* invertTree(TreeNode* root) {
    invert(root);
    return root;
}

void post_traversal(TreeNode *root, string& postorder){
    if(!root) return;
    post_traversal(root->left, postorder);
    post_traversal(root->right, postorder);
    postorder += root->elem;
}

int main()
{
    char in[10003], pre[10003];
    int n;
    cin >> n;
    char c;
    for(int i=0; i<n; i++)
    {
        cin >> c;
        pre[i] = c;
    }
    for(int i=0; i<n; i++)
    {
        cin >> c;
        in[i] = c;
    }
    TreeNode* root;
    root = build_tree(in, pre, n);
    root = invertTree(root);
    string postorder = "";
    post_traversal(root, postorder);
    cout << postorder << endl;
}
