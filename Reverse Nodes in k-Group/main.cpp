#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// leetcode-25 by Robin
ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode *p = head;
    int len = 0;
    while (p) {
        p = p->next;
        ++len;
    }
    k %= len;
    if (k == 1) return head;
    if (k == 0) k = len;
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    // cur看作上一组的最后一个
    ListNode *cur = dummy;
    ListNode *first = NULL, *last = NULL, *secondLast = NULL;
    while (len >= k) {
        int tempK = 0;
        first = cur->next;
        last = cur->next->next;
        secondLast = cur->next;
        while (tempK < k-1) {
            ListNode *tempNode = last->next;
            ++tempK;
            last->next = secondLast;
            secondLast = last;
            last = tempNode;
        }
        first->next = last;
        cur->next = secondLast;
        cur = first;
        len -= k;
    }
    return dummy->next;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
