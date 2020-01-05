#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int data;
    struct node* next;
} NODE;

int linkedListCircleLength(NODE* head);

int main (int argc, char * argv[]) {
    NODE* head = (NODE*)malloc(sizeof(NODE));
    head->data = 1;
    NODE* node1 = (NODE*)malloc(sizeof(NODE));
    node1->data = 2;
    NODE* node2 = (NODE*)malloc(sizeof(NODE));
    node2->data = 3;
    NODE* node3 = (NODE*)malloc(sizeof(NODE));
    node3->data = 4;
    NODE* node4 = (NODE*)malloc(sizeof(NODE));
    node4->data = 5;
    NODE* node5 = (NODE*)malloc(sizeof(NODE));
    node5->data = 6;
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node2;
//    NODE *head = NULL;
    int length = linkedListCircleLength(head);
    printf("%d\n", length);
}

int linkedListCircleLength(NODE* head) {
    if(!head) return NULL;
    NODE* slow = head;
    NODE* fast = head->next;
    int path_len = 0;
    while(slow && fast && fast->next){
        if(slow == fast){
            break;
        }
        path_len++;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(!slow || !fast || !fast->next){
        return 0;
    }
    slow = head;
    while(path_len){
        slow = slow->next;
        path_len--;
    }
    fast = slow->next;
    int circle_len = 1;
    while(fast != slow){
        circle_len++;
        fast = fast->next;
    }
    return circle_len;
}