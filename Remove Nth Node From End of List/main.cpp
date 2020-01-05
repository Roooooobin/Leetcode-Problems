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

//ListNode* removeNthFromEnd(ListNode* head, int n) {
//    int len = 0;
//    ListNode *p = head;
//    while(p){
//        len++;
//        p = p->next;
//    }
//    //remove head then return head->next
//    if(len == n){
//        return head->next;
//    }
//    int index = len-n;
//    ListNode *pre = head;
//    p = head;
//    while(index--){
//        pre = p;
//        p = p->next;
//    }
//    pre->next = p->next;
//    return head;
//}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *p = head;
    int delay = n;
    ListNode *n_fromtheendNode = head;
    ListNode *pre_n_fromtheEndNode = NULL;
    while(p){
        if(delay){
            delay--;
        }
        else{
            pre_n_fromtheEndNode = n_fromtheendNode;
            n_fromtheendNode = n_fromtheendNode->next;
        }
        p = p->next;
    }
    //if n_fromtheendNode still at head, meaning remove head, return head->next
    if(n_fromtheendNode == head) return head->next;
    pre_n_fromtheEndNode->next = n_fromtheendNode->next;
    return head;
}

int main()
{
    ListNode *l1 = new ListNode(1);
    ListNode *p = new ListNode(4);
    l1->next = p;
    ListNode *p1 = new ListNode(9);
    l1->next->next = p1;
//    while(l1 != NULL){
//        cout << l1->val << endl;
//        l1 = l1->next;
//    }
    ListNode *ans = removeNthFromEnd(l1, 3);
    while(ans!= NULL){
        cout << ans->val << endl;
        ans = ans->next;
    }
    return 0;
}
