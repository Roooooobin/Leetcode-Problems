#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// leetcode-876 by Robin
ListNode* middleNode(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
