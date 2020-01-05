#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
            : val(_val), left(_left), right(_right), next(_next) {}
};

Node* connect(Node *root) {
    if(!root) return NULL;
    queue<Node*> q;
    q.push(root);
    while(true){
        int cnt = q.size();
        if(!cnt) break;
        while(cnt--){
            Node *cur = q.front();
            q.pop();
            if(cnt > 0) {
                Node *next_ = q.front();
                cur->next = next_;
            }
            else{
                cur->next = NULL;
            }
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
        }
    }
    return root;
}

//void connectNodes(Node* node1, Node* node2) {
//    node1->next = node2;
//    if(node1->left) {
//        connectNodes(node1->right, node2->left);
//        connectNodes(node1->left, node1->right);
//        connectNodes(node2->left, node2->right);
//    }
//}
//
//Node* connect(Node* root) {
//    if(!root || !root->left) return root;
//    connectNodes(root->left, root->right);
//    return root;
//}

int main() {
    Node* root = new Node(1);
    Node* node1 = new Node(2);
    Node* node2 = new Node(3);
    Node* node3 = new Node(4);
    Node* node4 = new Node(5);
    Node* node5 = new Node(6);
    root->left = node1;
    root->right = node2;
//
//    node1->right = node3;
//    root->right = node4;
//    node4->right = node5;
    root = connect(root);
    Node* p = root;
    cout << root->left->next->val << endl;

    return 0;
}