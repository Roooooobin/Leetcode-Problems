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

void solve(TreeNode* root, vector<int>& ret)
{
    if(!root){
        return;
    }
    solve(root->left, ret);
    ret.push_back(root->val);
    solve(root->right, ret);
}

bool isValidBST(TreeNode* root) {
    if(!root || (!root->left && !root->right)) return true;
    vector<int> ans;
    solve(root, ans);
    for(int i=1; i<ans.size(); i++){
        if(ans[i] <= ans[i-1]) return false;
    }
    return true;
}

int main()
{
    TreeNode *tree = new TreeNode(2);
    TreeNode *rchild1 = new TreeNode(3);
    TreeNode *lchild1 = new TreeNode(1);
    tree->left = lchild1;
    tree->right = rchild1;
    cout << isValidBST(tree) << endl;
//    for(auto x: ans){
//        cout << x << ' ';
//    }
//    cout << endl;
    return 0;
}
