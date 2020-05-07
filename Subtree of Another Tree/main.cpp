#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// leetcode-572 by Robin
bool isEqual(TreeNode* s, TreeNode* t){
    if(s == NULL && t != NULL || s != NULL && t == NULL) return false;
    if(s == NULL && t == NULL) return true;
    if(s->val != t->val) return false;
    return isEqual(s->left, t->left) && isEqual(s->right, t->right);
}

bool isSubtree(TreeNode* s, TreeNode* t) {
    bool equalFlag = isEqual(s, t);
    if(s != NULL){
        return equalFlag || isSubtree(s->left, t) || isSubtree(s->right, t);
    }
    else return equalFlag;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
