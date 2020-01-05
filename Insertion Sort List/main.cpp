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

//ListNode* insertionSortList(ListNode* head) {
//    ListNode *dummy = new ListNode(0);
//    dummy->next = head;
//    ListNode *cur = head;
//    ListNode *pre = dummy;
//    while(cur){
//        if(cur->next && cur->val > cur->next->val){
//            while(pre->next && pre->next->val < cur->next->val){
//                pre = pre->next;
//            }
//            ListNode *tmp = pre->next;
//            pre->next = cur->next;
//            cur->next = cur->next->next;
//            pre->next->next = tmp;
//            pre = dummy;
//        }
//        else{
//            cur = cur->next;
//        }
//    }
//    return dummy->next;
//}

ListNode* insertionSortList(ListNode* head)
{
    ListNode *dummy = new ListNode(0);
    //dummy->next = head;
    ListNode *pre = dummy;
    ListNode *cur = head;
    ListNode *nextNode = NULL;
    while(cur){
        //next node to be sorted
        nextNode = cur->next;
        while(pre->next && pre->next->val < cur->val){
            pre = pre->next;
        }
        cur->next = pre->next;
        pre->next = cur;
        pre = dummy;
        cur = nextNode;
    }
    return dummy->next;
}

int main()
{
    ListNode *l1 = new ListNode(1);
    ListNode *p = new ListNode(4);
    l1->next = p;
    ListNode *p1 = new ListNode(3);
    p->next = p1;
    ListNode *p2 = new ListNode(2);
    p1->next = p2;
//    ListNode *p3 = new ListNode(5);
//    p2->next = p3;
//    ListNode *p4 = new ListNode(6);
//    p3->next = p4;
//    ListNode *p5 = new ListNode(7);
//    p4->next = p5;
    insertionSortList(l1);
    while(l1!= NULL){
        cout << l1->val << endl;
        l1 = l1->next;
    }
    return 0;
}
