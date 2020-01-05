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
public:
    void solve(vector<int>& ret, TreeNode* root, int sum, int& cnt)
    {
        if(!root) return;
        //cout << root->val << endl;
        ret.push_back(root->val);
        if(root->val == sum){
            cnt++;
        }
        solve(ret, root->left, sum-root->val, cnt);
        solve(ret, root->right, sum-root->val, cnt);
        ret.pop_back();
        if(ret.empty()){
            solve(ret, root->left, sum, cnt);
            solve(ret, root->right, sum, cnt);
        }
    }

    int pathSum(TreeNode* root, int sum) {
        if(!root) return 0;
        vector<int> v;
        int cnt = 0;
        solve(v, root, sum, cnt);
        return cnt;
    }
};


int main()
{
    TreeNode *tree = new TreeNode(10);
    TreeNode *rchild1 = new TreeNode(-3);
    TreeNode *lchild1 = new TreeNode(5);
    TreeNode *lchild2 = new TreeNode(3);
    TreeNode *lchild3 = new TreeNode(3);
    TreeNode *rchild2 = new TreeNode(2);
    TreeNode *rchild3 = new TreeNode(-2);
    TreeNode *rchild4 = new TreeNode(1);
    TreeNode *rchild5 = new TreeNode(11);
    tree->right = rchild1;
    tree->left = lchild1;
    lchild1->left = lchild2;
    lchild1->right = rchild2;
    lchild2->left = lchild3;
    lchild2->right = rchild3;
    rchild2->right = rchild4;
    rchild1->right = rchild5;
    Solution s;
//    for(auto v: s.pathSum(tree, 8)){
//        for(auto x: v){
//            cout << x << ' ';
//        }
//        cout << endl;
//    }
    cout << s.pathSum(tree, 8) << endl;
    return 0;
}
