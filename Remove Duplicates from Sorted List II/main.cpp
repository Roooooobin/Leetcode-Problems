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

ListNode* deleteDuplicates(ListNode* head) {
    if(!head || !head->next) return head;
    bool flag = false;
    while(head && head->next){
        flag = false;
        while(head->next && head->next->val == head->val){
            head = head->next;
            flag = true;
        }
        if(!head) return head;
        if(flag) head = head->next;
        else break;
    }
    if(!head || !head->next) return head;
    ListNode *prepre = head;
    ListNode *pre = head->next;
    ListNode *p = head->next->next;
    while(p){
        flag = false;
        while(p && p->val == pre->val){
            p = p->next;
            flag = true;
        }
        if(flag) {prepre->next = p;}
        else if(!p->next || p->next->val != p->val) prepre = p;
        else prepre = pre;
        pre = p;
        if(!p) break;
        p = p->next;
    }
    return head;
}

int main()
{
//    ListNode *l1 = NULL;
    ListNode *l1 = new ListNode(1);
    ListNode *p = new ListNode(2);
    l1->next = p;
    ListNode *p1 = new ListNode(3);
    p->next = p1;
    ListNode *p2 = new ListNode(3);
    p1->next = p2;
    ListNode *p3 = new ListNode(5);
    p2->next = p3;
    ListNode *p4 = new ListNode(5);
    p3->next = p4;
    ListNode *p5 = new ListNode(7);
    p4->next = p5;

    ListNode *ans = deleteDuplicates(l1);
    while(ans!= NULL){
        cout << ans->val << endl;
        ans = ans->next;
    }
    return 0;
}
