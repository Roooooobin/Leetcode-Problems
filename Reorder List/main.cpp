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

//void reorderList(ListNode* head) {
//    if(head == NULL || head->next == NULL || head->next->next == NULL) return;
//    int len = 0;
//    ListNode *p = head;
//    //calc length of the list
//    while(p){
//        len++;
//        p = p->next;
//    }
//    int mid = len / 2;
//    ListNode *firstHalf = head;
//    ListNode *secondHalf = NULL;
//    p = head;
//    //p point to the node in the middle
//    while(mid--){
//        p = p->next;
//    }
//    secondHalf = p->next;
//    p->next = NULL;
//
//    //reverse the second half
//    ListNode *reversed_secondHalf = secondHalf;
//    if(secondHalf->next){
//        p = secondHalf->next->next;
//        reversed_secondHalf = secondHalf->next;
//        ListNode *q = secondHalf;
//        q->next = NULL;
//        while(p){
//            reversed_secondHalf->next = q;
//            q = reversed_secondHalf;
//            reversed_secondHalf = p;
//            p = p->next;
//        }
//        reversed_secondHalf->next = q;
//    }
//    //merge first half and reversed second half
//    p = firstHalf;
//    ListNode *q = reversed_secondHalf;
//    while(reversed_secondHalf){
//        reversed_secondHalf = reversed_secondHalf->next;
//        q->next = p->next;
//        p->next = q;
//        p = q->next;
//        q = reversed_secondHalf;
//    }
//}

void reorderList(ListNode* head) {
    if(head == NULL || head->next == NULL || head->next->next == NULL) return;
    int len = 0;
    ListNode *p = head;
    //calc length of the list
    while(p){
        len++;
        p = p->next;
    }
    int mid = len / 2;
    ListNode *firstHalf = head;
    ListNode *secondHalf = NULL;
    p = head;
    //p point to the node in the middle
    while(mid--){
        p = p->next;
    }
    secondHalf = p->next;
    p->next = NULL;

    //reverse the second half
    ListNode *reversed_secondHalf = secondHalf;
    ListNode *p2 = reversed_secondHalf->next;
    reversed_secondHalf->next = NULL;
    while(p2){
        p = p2->next;
        p2->next = reversed_secondHalf;
        reversed_secondHalf = p2;
        p2 = p;
    }

    //merge first half and reversed second half
    p = firstHalf;
    ListNode *q = reversed_secondHalf;
    while(reversed_secondHalf){
        reversed_secondHalf = reversed_secondHalf->next;
        q->next = p->next;
        p->next = q;
        p = q->next;
        q = reversed_secondHalf;
    }
}

//void reorderList(ListNode* head) {
//    if (!head || !head->next) return;
//    ListNode* list1 = head;
//    ListNode* temp = findMiddle(head);
//    ListNode* list2 = temp->next;
//    temp->next = nullptr;
//    list2 = reverse(list2);
//    merge(list1, list2);
//}
//
//void merge(ListNode* l1, ListNode* l2) {
//    ListNode* dummy = new ListNode(0);
//    ListNode* cur = dummy;
//    while (l2 && l1) {
//        cur->next = l1;
//        l1 = l1->next;
//        cur = cur->next;
//        cur->next = l2;
//        l2 = l2->next;
//        cur = cur->next;
//    }
//    if (l2) cur->next = l2;
//    delete dummy;
//}
//
//ListNode* findMiddle(ListNode* head) {
//    if (!head) return head;
//    if (!head->next) return head;
//    ListNode* fast = head->next;
//    ListNode* slow = head;
//    while (fast->next && fast->next->next) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    return slow;
//}
//
//ListNode* reverse(ListNode* head) {
//    if (!head) return head;
//    ListNode* prev = NULL;
//    ListNode* next = NULL;
//    while (head) {
//        next = head->next;
//        head->next = prev;
//        prev = head;
//        head = next;
//    }
//    return prev;
//}

//// O(N) time, O(1) space in total
//void reorderList(ListNode *head) {
//    if (!head || !head->next) return;
//
//    // find the middle node: O(n)
//    ListNode *p1 = head, *p2 = head->next;
//    while (p2 && p2->next) {
//        p1 = p1->next;
//        p2 = p2->next->next;
//    }
//
//    // cut from the middle and reverse the second half: O(n)
//    ListNode *head2 = p1->next;
//    p1->next = NULL;
//
//    p2 = head2->next;
//    head2->next = NULL;
//    while (p2) {
//        p1 = p2->next;
//        p2->next = head2;
//        head2 = p2;
//        p2 = p1;
//    }
//
//    // merge two lists: O(n)
//    for (p1 = head, p2 = head2; p1; ) {
//        auto t = p1->next;
//        p1 = p1->next = p2;
//        p2 = t;
//    }
//
//}

int main()
{
    ListNode *l1 = new ListNode(1);
    ListNode *p = new ListNode(2);
    l1->next = p;
    ListNode *p1 = new ListNode(3);
    p->next = p1;
//    ListNode *p2 = new ListNode(4);
//    p1->next = p2;
//    ListNode *p3 = new ListNode(5);
//    p2->next = p3;
//    ListNode *p4 = new ListNode(6);
//    p3->next = p4;
//    ListNode *p5 = new ListNode(7);
//    p4->next = p5;
    reorderList(l1);
    while(l1!= NULL){
        cout << l1->val << endl;
        l1 = l1->next;
    }
    return 0;
}
