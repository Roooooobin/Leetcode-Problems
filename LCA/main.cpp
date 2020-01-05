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

int calc_depth(TreeNode *root, TreeNode *node, int depth)
{
    if(!root) return -1;
    if(root == node){
        return depth;
    }
    int dep = calc_depth(root->left, node, depth+1);
    if(dep == -1){
        return calc_depth(root->right, node, depth+1);
    }
    else return dep;
}

TreeNode* find_LCA(TreeNode *root, TreeNode *p, TreeNode *q)
{
    // one node is the father of the other node
    if(!root || root == p || root == q) return root;
    // find in the left child
    TreeNode *lchild = find_LCA(root->left, p, q);
    // find in the right child
    TreeNode *rchild = find_LCA(root->right, p, q);
    // the root can find p,q in left and right, root is LCA
    if(lchild && rchild){
        return root;
    }
    // in the same childTree
    return lchild? lchild: rchild;
}

int distance_Nodes(TreeNode *root, TreeNode *p, TreeNode *q)
{
    int depthP = calc_depth(root, p, 0);
    int depthQ = calc_depth(root, q, 0);
    TreeNode *LCA = find_LCA(root, p, q);
    int depthLCA = calc_depth(root, LCA, 0);
    return depthP + depthQ - 2 * depthLCA;
}

int main()
{
    TreeNode *tree = new TreeNode(3);
    TreeNode *lchild1 = new TreeNode(9);
    TreeNode *rchild1 = new TreeNode(2);
    TreeNode *lchild2 = new TreeNode(5);
    TreeNode *rchild2 = new TreeNode(7);
    TreeNode *rchild3 = new TreeNode(6);
    tree->left = lchild1;
    tree->right = rchild1;
    rchild1->left = lchild2;
    rchild1->right = rchild2;
    lchild2->right = rchild3;
    int depth = calc_depth(tree, lchild2, 0);
    cout << depth << endl;
    TreeNode *LCA = find_LCA(tree, rchild3, rchild2);
    cout << LCA->val << endl;
    cout << distance_Nodes(tree, rchild3, lchild1) << endl;
    return 0;
}
