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
    node5->next = head;
//    NODE *head = NULL;
    int length = linkedListCircleLength(head);
    printf("%d\n", length);
}

int is_visited(NODE *l, NODE *tar, int len){
    NODE *p = l;
    int dis = 0;
    while(p){
        if(p == tar){
            return dis;
        }
        dis++;
        p = p->next;
        if(dis >= len) break;
    }
    return -1;
}

int linkedListCircleLength(NODE* head) {
    if(!head) return 0;
    NODE *visited_list = head;
    NODE *p = head;
    NODE *q = visited_list;
    int len = 1;
    int dis;
    while(p) {
        dis = is_visited(visited_list, p->next, len);
        if (dis != -1) {
            return len - dis;
        }
        q = q->next;
        len++;
        p = p->next;
    }
    return 0;
}