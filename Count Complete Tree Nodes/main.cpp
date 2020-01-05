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

void solve(TreeNode* p, int &cnt)
{
    if(!p) return;
    cnt++;
    solve(p->left, cnt);
    solve(p->right, cnt);
}

int countNodes(TreeNode* root) {
	int cnt = 0;
	solve(root, cnt);
	return cnt;
}

int countNodes(TreeNode* root) {
    if(!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main()
{
    TreeNode *tree = new TreeNode(3);
    TreeNode *lchild1 = new TreeNode(9);
    TreeNode *rchild1 = new TreeNode(20);
    TreeNode *lchild2 = new TreeNode(15);
    TreeNode *rchild2 = new TreeNode(7);
    tree->left = lchild1;
    tree->right = rchild1;
    rchild1->left = lchild2;
    rchild1->right = rchild2;
//    int a[] = {9, 15, 7, 20, 3};
//    int b[] = {9, 3, 15, 20, 7};
//    VI post(a, a+5);
//    VI in(b, b+5);
//    TreeNode *head = buildTree(in, post);
    cout << countNodes(tree) << endl;
//    vector<VI> ans = levelOrder(head);
//    for(auto v: ans){
//        for(auto x: v){
//            cout << x << ' ';
//        }
//        cout << endl;
//    }

    return 0;
}
