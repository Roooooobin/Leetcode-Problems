#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* constructFromPrePost(vector<int> pre, vector<int> post) {
    if(pre.empty()) return NULL;
    TreeNode* root = new TreeNode(pre[0]);
    if(pre.size() == 1) return root;
    int i;
    for(i=0; i<post.size(); i++){
        if(post[i] == pre[1]) break;
    }
    i++;
    root->left = constructFromPrePost(vector<int>(pre.begin()+1, pre.begin()+i+1), vector<int>(post.begin(), post.begin()+i));
    root->right = constructFromPrePost(vector<int>(pre.begin()+i+1, pre.end()), vector<int>(post.begin()+i, post.end()-1));
    return root;
}

int main() {
    vector<int> v = {1, 2};
    vector<int> v2(v.begin()+1, v.end());
    for(auto x: v2){
        cout << x << ' ';
    }
    return 0;
}