#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

void solve(Node* root, vector<int>& post_order){
    if(!root) return;
    for(auto node: root->children){
        solve(node, post_order);
    }
    post_order.push_back(root->val);
}

vector<int> postorder(Node* root) {
    vector<int> post_order = {};
    solve(root, post_order);
    return post_order;
}

int main() {

    return 0;
}
