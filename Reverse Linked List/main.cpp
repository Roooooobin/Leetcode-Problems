#include <bits/stdc++.h>
using namespace std;

struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

// leetcode-206 by Robin
ListNode* reverseList(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode *pre = NULL, *cur = head, *tmp = NULL;
    while(cur){
        tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
}

ListNode* reverseList(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode *p = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return p;
}

int main()
{
//    ListNode *l1 = NULL;
    ListNode *l1 = new ListNode(1);
    ListNode *p = new ListNode(2);
    l1->next = p;
    ListNode *p1 = new ListNode(3);
    p->next = p1;
    ListNode *p2 = new ListNode(4);
    p1->next = p2;
    ListNode *p3 = new ListNode(5);
    p2->next = p3;
    ListNode *p4 = new ListNode(6);
    p3->next = p4;

    ListNode *ans = reverseList(l1);
    while(ans!= NULL){
        cout << ans->val << endl;
        ans = ans->next;
    }
    return 0;
}