#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    if(!head) return false;
    ListNode *slow = head;
    ListNode *fast = head->next;
    while(slow != fast){
        if(!fast || !fast->next) return false;
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
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
    p4->next = p1;

    cout << hasCycle(l1) << endl;
    return 0;
}
