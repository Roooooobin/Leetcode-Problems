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

ListNode* rotateRight(ListNode* head, int k) {
    if(!head || !head->next) return head;
    ListNode *endNode = head;
    ListNode *tmpHead = head;
    int len = 1;    //length of the link-list
    while(endNode->next){
        len++;
        endNode = endNode->next;
    }
    //if k > len, rotate k === rotate k % len
    k %= len;
    if(k == 0) return head;
    ListNode *p = head; //working pointer
    k = len - k - 1;
    while(p && k){
        k--;
        p = p->next;
    }
    //p->next becomes new head
    head = p->next;
    endNode->next = tmpHead;
    p->next = NULL;
    return head;
}

int main()
{
    ListNode *l1 = new ListNode(1);
    ListNode *p = new ListNode(2);
    l1->next = p;
//    ListNode *p1 = new ListNode(3);
//    p->next = p1;
//    ListNode *p2 = new ListNode(4);
//    p1->next = p2;
//    ListNode *p3 = new ListNode(5);
//    p2->next = p3;
//    ListNode *p4 = new ListNode(6);
//    p3->next = p4;
//    while(l1 != NULL){
//        cout << l1->val << endl;
//        l1 = l1->next;
//    }
    ListNode *ans = rotateRight(l1, 3);
    while(ans!= NULL){
        cout << ans->val << endl;
        ans = ans->next;
    }
    return 0;
}
