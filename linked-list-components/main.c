#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int is_in(int val, int* nums, int size){
    int i;
    for(i=0; i<size; i++){
        if(val == *(nums+i)){
            return 1;
        }
    }
    return 0;
}

int numComponents(struct ListNode* head, int* G, int GSize){
    int cnt = 0;
    struct ListNode *p = head;
    int last = 0;
    while(p){
        if(!is_in(p->val, G, GSize)){
            if(last){
                last = 0;
                cnt++;
            }
            //printf("%d 1\n", p->val);
            //printf("%d\n", cnt);
        }
        else{
            last = 1;
        }
        p = p->next;
    }
    if(last) cnt++;
    return cnt;
}

int main()
{
    int a[4] = {0, 1, 3};
    struct ListNode *head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = 0;
    head->next = NULL;
    struct ListNode *l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next = l1;
    l1->val = 1;
    l1->next = l2;
    l2->val = 2;
    l2->next = l3;
    l3->val = 3;
    l3->next = NULL;
    int ans = numComponents(head, a, 3);
    printf("%d\n", ans);
    return 0;
}
