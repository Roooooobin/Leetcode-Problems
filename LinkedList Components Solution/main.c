#include <stdio.h>
#include <stdlib.h>
#define MAX_N 100007

typedef struct node {
    int val;
    int data_hidden;
    struct node* next;
} NODE;

int is_in(int val, int* nums, int size){
    int i;
    for(i=0; i<size; i++){
        if(val == *(nums+i)){
            return 1;
        }
    }
    return 0;
}

int linkedListComponents(NODE* head, int* A, int len)
{
    int cnt = 0;
    NODE *p = head;
    int last = 0;
    while(p){
        printf("%d", p->val);
        if(!is_in(p->val, A, len)){
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
//    while(p != NULL){
//        printf("%d\n", p->data_hidden);
//        p = p->next;
//    }
//    int i = 0;
//    for(; i<len; i++){
//        printf("%d ", A[i]);
//    }
}

int main (int argc, char * argv[]) {

    int n, m;
    scanf("%d%d", &n, &m);
    int a[MAX_N] = {0};
    int b[MAX_N] = {0};
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<m; i++){
        scanf("%d", &b[i]);
    }
    NODE* head = NULL;
    NODE* prev = NULL;
    for (i = 0; i < n; i++) {
        NODE* node = (NODE*)malloc(sizeof(NODE));
        node->val= a[i];
        node->data_hidden = a[i] + 23;
        node->next = NULL;
        if (head == NULL) {
            head = node;
        } else {
            prev->next = node;
        }
        prev = node;
    }

    int cnt = linkedListComponents(head, b, m);
    FILE *fp = NULL;
    fp = fopen(
            "C:\\Users\\robin\\CLionProjects\\LinkedList Components Solution\\15.out", "w");
    fprintf(fp, "%d", cnt);
    printf("%d\n", cnt);
}