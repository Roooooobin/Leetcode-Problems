#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

ListNode* findMidNode(ListNode* head){
    ListNode *slow = head, *fast = head;
    ListNode* preMid = NULL;
    while(fast != NULL && fast->next != NULL){
        preMid = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(preMid != NULL){
        preMid->next = NULL;
    }
    return slow;
}

// leetcode-109 by Robin
TreeNode* sortedListToBST(ListNode* head) {
    if(!head) return NULL;
    ListNode *mid = findMidNode(head);
    TreeNode *node = new TreeNode(mid->val);
    if(head == mid){
        return node;
    }
    node->left = sortedListToBST(head);
    node->right = sortedListToBST(mid->next);
    return node;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
