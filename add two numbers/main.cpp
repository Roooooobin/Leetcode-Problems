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

//ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//    long long num1 = 0;
//    long long num2 = 0;
//    long long pro_10 = 1;
//    while(l1 != NULL){
//        num1 += l1->val * pro_10;
//        pro_10 *= 10;
//        l1 = l1->next;
//    }
//    pro_10 = 1;
//    while(l2 != NULL){
//        num2 += l2->val * pro_10;
//        pro_10 *= 10;
//        l2 = l2->next;
//    }
//    //cout << num1 << ' ' << num2 << endl;
//    long long sum = num1 + num2;
//    ListNode *head = new ListNode(sum % 10);
//    ListNode *p = head;
//    sum /= 10;
//    while(sum != 0){
//        ListNode *q = new ListNode(sum % 10);
//        p->next = q;
//        p = p->next;
//        sum /= 10;
//    }
//    return head;
//}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    ListNode *head = new ListNode(-1);
    ListNode *p = head;
    while(l1 != NULL && l2 != NULL){
        cout << l1->val << ' ' << l2->val;
        int sum = l1->val + l2->val + carry;
        ListNode *q = new ListNode(sum % 10);
        p->next = q;
        p = q;
        if(sum >= 10) carry = 1;
        else carry = 0;
        l1 = l1->next;
        l2 = l2->next;
    }
    while(l1 != NULL){
        int sum = l1->val + carry;
        ListNode *q = new ListNode(sum % 10);
        p->next = q;
        p = q;
        if(sum >= 10) carry = 1;
        else carry = 0;
        l1 = l1->next;
    }
    while(l2 != NULL){
        int sum = l2->val + carry;
        ListNode *q = new ListNode(sum % 10);
        p->next = q;
        p = q;
        if(sum >= 10) carry = 1;
        else carry = 0;
        l2 = l2->next;
    }
    if(carry == 1){
        ListNode *q = new ListNode(1);
        p->next = q;
    }
    return head->next;
}


int main()
{
    ListNode *l1 = new ListNode(1);
    ListNode *p = new ListNode(9);
    l1->next = p;
    ListNode *p1 = new ListNode(9);
    l1->next->next = p1;
//    while(l1 != NULL){
//        cout << l1->val << endl;
//        l1 = l1->next;
//    }
    ListNode *l2 = new ListNode(9);
//    while(l2 != NULL){
//        cout << l2->val << endl;
//        l2 = l2->next;
//    }
    ListNode *ans = addTwoNumbers(l1, l2);
    while(ans!= NULL){
        cout << ans->val << endl;
        ans = ans->next;
    }
    return 0;
}
