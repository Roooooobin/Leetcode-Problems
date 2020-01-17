#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//bool isPalindrome(ListNode* head) {
//    stack<int> st;
//    ListNode* p = head;
//    while(p){
//        st.push(p->val);
//        p = p->next;
//    }
//    p = head;
//    while(p){
//        if(st.top() != p->val) return false;
//        p = p->next;
//        st.pop();
//    }
//    return true;
//}

bool isPalindrome(ListNode* head) {
    if(!head || !head->next) return true;
    ListNode *slow = head, *fast = head;
    ListNode *p = NULL, *pre = NULL;
    while(fast && fast->next){
        p = slow;
        slow = slow->next;
        fast = fast->next->next;
        p->next = pre;
        pre = p;
    }
    if(fast) slow = slow->next;
    while(p){
        if(slow->val != p->val) return false;
        p = p->next;
        slow = slow->next;
    }
    return true;
}

int main() {

    return 0;
}
