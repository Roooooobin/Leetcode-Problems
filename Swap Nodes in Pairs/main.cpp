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

ListNode* swapPairs(ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    ListNode *p = head;
    ListNode *q = head->next;
    p->next = q->next;
    q->next = p;
    head = q;
    if(head->next->next == NULL) return head;
    //每两个节点作为一组进行操作
    //cur是每一组的第一个节点，pre是上一组的第二个节点
    ListNode *cur = head->next->next;
    ListNode *pre = head->next;
    //cout << cur->val << ' ' << pre->val << endl;
    while(cur !=NULL && cur->next != NULL){
        p = cur;
        q = cur->next;
        p->next = q->next;
        q->next = p;

        pre->next = q;
        //移动到下一组
        pre = p;
        cur = q->next->next;
    }
    return head;
}

int main()
{
    ListNode *l1 = NULL;
//    ListNode *l1 = new ListNode(1);
//    ListNode *p = new ListNode(2);
//    l1->next = p;
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
    ListNode *ans = swapPairs(l1);
    while(ans!= NULL){
        cout << ans->val << endl;
        ans = ans->next;
    }
    return 0;
}
