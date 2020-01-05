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

ListNode* reverseBetween(ListNode* head, int m, int n) {
    if(!head || !head->next) return head;
    int cnt = 2;
    ListNode *st = NULL;
    ListNode *headStart = head;
    //保留头部
    while(cnt < m){
        headStart = headStart->next;
        cnt++;
    }
    st = headStart;
    ListNode *p = NULL;
    //为了保留头部，cnt从2开始，如果不存在头部，cnt应该从1开始
    if(m == 1)  {p = head; cnt-=1;}
    else p = headStart->next;
    ListNode *pre = NULL;
    ListNode *q = NULL;
    while(cnt <= n && p){
        q = p->next;
        p->next = pre;
        pre = p;
        p = q;
        cnt++;
    }
    //没有首部
    if(m == 1){
        headStart->next = p;
        return pre;
    }
    else{
        headStart->next->next = p;
        st->next = pre;
        return head;
    }
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

    ListNode *ans = reverseBetween(l1, 1, 4);
    while(ans!= NULL){
        cout << ans->val << endl;
        ans = ans->next;
    }
    return 0;
}
