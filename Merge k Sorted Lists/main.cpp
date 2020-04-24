#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// leetcode-23 by Robin
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
    ListNode *dummy = new ListNode(0);
    ListNode *cur = dummy;
    while(l1 && l2){
        if(l1->val <= l2->val){
            cur->next = l1;
            l1 = l1->next;
        }
        else{
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    if(l1){
        cur->next = l1;
    }
    else{
        cur->next = l2;
    }
    return dummy->next;
}

ListNode* mergeKLists(vector<ListNode*>& lists) {
    int n = lists.size();
    if(n == 0) return NULL;
    int interval = 1;
    while(interval < n){
        for(int i=0; i<n-interval; i+=2*interval){
            lists[i] = mergeTwoLists(lists[i], lists[i+interval]);
        }
        interval *= 2;
    }
    return lists[0];
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
