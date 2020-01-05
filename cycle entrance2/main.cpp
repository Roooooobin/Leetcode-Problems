#include <stdio.h>
#include <stdlib.h>
#define MAX_N 100007

typedef struct node {
    int data_hidden;
    struct node* next;
} NODE;

NODE* CycleEntrance(NODE* head);

int judge_entrance(NODE* head, NODE* node){
    if(!node) return -1;
    NODE* p = head;
    int loop = 0;
    while(p && p != node){
        p = p->next;
        loop++;
    }
    return loop;
}

int main (int argc, char * argv[]) {

    int n;
    scanf("%d", &n);
    int a[MAX_N] = {0};
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    NODE* head = NULL;
    NODE* prev = NULL;
    for (i = 0; i < n; i++) {
        NODE* node = (NODE*)malloc(sizeof(NODE));
        node->data_hidden= a[i];
        node->next = NULL;
        if (head == NULL) {
            head = node;
        } else {
            prev->next = node;
        }
        prev = node;
    }
    int loop;
    scanf("%d", &loop);
    // loop = -1 表示链表无环
    if (loop != -1) {
        NODE* p = head;
        int index = 0;
        while (p != NULL) {
            if (index == loop) {
                prev->next = p;
                break;
            } else {
                index++;
                p = p->next;
            }
        }
    }

    NODE* entrance = CycleEntrance(head);
    int res = judge_entrance(head, entrance);
    printf("%d\n", res);
}

NODE* CycleEntrance(NODE* head){
    if(!head) return NULL;
    NODE *slow = head;
    NODE *fast = head;
    bool hasCycle = false;
    while(slow && fast){
        slow = slow->next;
        if(!fast->next) return NULL;
        fast = fast->next->next;
        if(slow == fast) {hasCycle = true; break;}
    }
    if(!hasCycle) return NULL;
    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return fast;
}