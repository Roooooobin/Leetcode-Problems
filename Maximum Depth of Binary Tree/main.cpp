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

int solve(TreeNode* root, int depth)
{
    if(!root) return depth;
    return max(solve(root->left, depth+1), solve(root->right, depth+1));
}

int maxDepth(TreeNode* root)
{
    return solve(root, 0);
}

int main()
{
    TreeNode *tree = new TreeNode(3);
    TreeNode *lchild1 = new TreeNode(9);
    TreeNode *rchild1 = new TreeNode(20);
    TreeNode *lchild2 = new TreeNode(15);
    TreeNode *rchild2 = new TreeNode(7);
    TreeNode *lchild3 = new TreeNode(2);
    TreeNode *lchild4 = new TreeNode(1);
    TreeNode *rchild3 = new TreeNode(4);
    tree->left = lchild1;
    tree->right = rchild1;
    rchild1->left = lchild2;
    rchild1->right = rchild2;
    lchild1->left = lchild3;
    lchild2->left = lchild4;
    rchild2->right = rchild3;
    cout << maxDepth(tree) << endl;
//    vector< VI > ans;
//    ans =
//    for(auto v: ans){
//        for(auto x: v){
//            cout << x << ' ';
//        }
//        cout << endl;
//    }
    return 0;
}
