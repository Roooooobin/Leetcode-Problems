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

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    if(!root) return vector< vector<int> >{};
    vector< vector<int> > ans;
    queue<TreeNode*> que_nodes;
    que_nodes.push(root);
    int level = 1;
    while(!que_nodes.empty()){
        vector<int> level_nodes;
        int _size = que_nodes.size();
        while(_size--){
            TreeNode *cur = que_nodes.front();
            que_nodes.pop();
            if(cur->left){
                que_nodes.push(cur->left);
            }
            if(cur->right){
                que_nodes.push(cur->right);
            }
            level_nodes.push_back(cur->val);
        }
        if(level & 1) ans.push_back(level_nodes);
        else ans.push_back(vector<int>(level_nodes.rbegin(), level_nodes.rend()));
        level++;
    }
    return ans;
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
    vector< VI > ans;
    ans = zigzagLevelOrder(tree);
    for(auto v: ans){
        for(auto x: v){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
