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

ListNode* partition(ListNode* head, int x) {
    ListNode *lessNodes = new ListNode(0);
    ListNode *greaterNodes = new ListNode(0);
    ListNode *p = lessNodes;
    ListNode *q = greaterNodes;
    while(head){
        if(head->val < x){
            p->next = head;
            head = head->next;
            p = p->next;
            p->next = NULL;
        }
        else{
            q->next = head;
            head = head->next;
            q = q->next;
            q->next = NULL;
        }
    }
    p->next = greaterNodes->next;
    return lessNodes->next;
}

int main()
{
    //ListNode *l1 = NULL;
    ListNode *l1 = new ListNode(1);
    ListNode *p = new ListNode(5);
    l1->next = p;
    ListNode *p1 = new ListNode(3);
    p->next = p1;
    ListNode *p2 = new ListNode(4);
    p1->next = p2;
    ListNode *p3 = new ListNode(2);
    p2->next = p3;
    ListNode *p4 = new ListNode(1);
    p3->next = p4;
//    while(l1 != NULL){
//        cout << l1->val << endl;
//        l1 = l1->next;
//    }
    ListNode *ans = partition(l1, 3);
    while(ans!= NULL){
        cout << ans->val << endl;
        ans = ans->next;
    }
    return 0;
}
