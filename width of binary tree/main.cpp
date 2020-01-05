//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node
//{
//    struct node* left;
//    struct node* right;
//    char elem;
//} NODE;
//
//NODE* build_tree(char* in, char* pre, int length)
//{
//    if(length==0)
//        return NULL;
//    NODE* node = new NODE;
//    node->elem=*pre;
//    int i=0;
//    for(; i<length; i++)
//    {
//        if(in[i]==*pre)
//            break;
//    }
//    node->left= build_tree(in, pre + 1, i);
//    node->right= build_tree(in + i + 1, pre + i + 1, length - i - 1);
//    return node;
//}
//
//int BinaryTreeWidth(NODE* root);
//
//int main()
//{
//    char in[10003], pre[10003];
//    int n;
//    scanf("%d", &n);
//    char c;
//    for(int i=0; i<n; i++)
//    {
//        scanf("%d", &c);
//        pre[i] = c;
//    }
//    for(int i=0; i<n; i++)
//    {
//        scanf("%d", &c);
//        in[i] = c;
//    }
//    NODE* root;
//    root = build_tree(in, pre, n);
//    int width = BinaryTreeWidth(root);
//    printf("%d\n", width);
//}
//
//

#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    struct node* left;
    struct node* right;
    char elem;
} NODE;

NODE* build_tree(char* in, char* pre, int length)
{
    if(length==0)
        return NULL;
    NODE* node = new NODE;
    node->elem=*pre;
    int i=0;
    for(; i<length; i++)
    {
        if(in[i]==*pre)
            break;
    }
    node->left= build_tree(in, pre + 1, i);
    node->right= build_tree(in + i + 1, pre + i + 1, length - i - 1);
    return node;
}

int BinaryTreeWidth(NODE* root)
{
    if(!root) return 0;
    queue<NODE*> q;
    q.push(root);
    int cnt;
    int width = -1;
    while(true){
        cnt = q.size();
        if(cnt == 0) break;
        width = max(width, cnt);
        while(cnt--){
            NODE *cur = q.front();
            q.pop();
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
        }
    }
    return width;
}

int main()
{
    char in[10003], pre[10003];
    int n;
    scanf("%d", &n);
    scanf("%s", pre);
    scanf("%s", in);
    NODE* root;
    root = build_tree(in, pre, n);
    int width = BinaryTreeWidth(root);
    printf("%d\n", width);
}
