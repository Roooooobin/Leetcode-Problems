#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct node {
    int val;
    int data_hidden;
    struct node* next;
} NODE;

int is_in(int val, vector<int>& nums){
    int index = lower_bound(nums.begin(), nums.end(), val) - nums.begin();
    if(index >= nums.size() || nums[index] != val){
        return 0;
    }
    return 1;
}

int linkedListComponents(NODE* head, vector<int>& A)
{
    int cnt = 0;
    NODE *p = head;
    int last = 0;
    sort(A.begin(), A.end());
    while(p){
        if(!is_in(p->val, A)){
            if(last){
                last = 0;
                cnt++;
            }
        }
        else{
            last = 1;
        }
        p = p->next;
    }
    if(last) cnt++;
    return cnt;
}

int main (int argc, char * argv[]) {

    int n, m;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    int x;
    for (int i=0; i<n; i++) {
        cin >> x;
        a.push_back(x);
    }
    for(int i=0; i<m; i++){
        cin >> x;
        b.push_back(x);
    }
    NODE* head = NULL;
    NODE* prev = NULL;
    for (int i=0; i<n; i++) {
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

    int cnt = linkedListComponents(head, b);
//    FILE *fp = NULL;
//    fp = fopen(
//            "C:\\Users\\robin\\CLionProjects\\LinkedList Components Solution\\15.out", "w");
//    fprintf(fp, "%d", cnt);
    cout << cnt << endl;
}