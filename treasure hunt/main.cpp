//#include <bits/stdc++.h>
//using namespace std;
//
//typedef pair<int, int> cord_step;
//
//map<int, int> table;
//
//int bfs(int s, int e){
//    queue<cord_step> q;
//    q.push(cord_step(s, 0));
//    table[s] = 1;
//    while(true){
//        cord_step cur = q.front();
//        q.pop();
//        if(cur.first == e){
//            return cur.second;
//        }
//        if(!table.count(cur.first-1)){
//            table[cur.first-1] = 1;
//            q.push(cord_step(cur.first-1, cur.second+1));
//        }
//        if(!table.count(cur.first+1)){
//            table[cur.first+1] = 1;
//            q.push(cord_step(cur.first+1, cur.second+1));
//        }
//        if(!table.count(cur.first*2)){
//            table[cur.first*2] = 1;
//            q.push(cord_step(cur.first*2, cur.second+1));
//        }
//    }
//}
//
//int main() {
//    int s, e;
//    cin >> s >> e;
//    cout << bfs(s, e) << endl;
//    return 0;
//}

#include<stdio.h>
#include<string.h>
const int maxn=100001;
bool vis[maxn];
int n,k;
struct Node
{
    int x,step;
};
Node q[maxn];
int bfs()
{
    int i;
    Node now,next;
    int head,tail;
    head=tail=0;
    q[tail].x=n;
    q[tail].step=0;tail++;
    vis[n]=true;
    while(head<tail)
    {
        now=q[head];//取队首
        head++;//弹出对首
        for(i=0;i<3;i++)
        {
            if(i==0) next.x=now.x-1;
            else if(i==1) next.x=now.x+1;
            else next.x=2*now.x;
            if(next.x<0 || next.x>=maxn) continue;//剪枝、排除越界
            if(!vis[next.x])
            {
                vis[next.x]=true;
                next.step=now.step+1;
                q[tail].x=next.x;q[tail].step=next.step;tail++;
                if(next.x==k) return next.step;
            }
        }
    }
}
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        memset(vis,false,sizeof(vis));
        if(n>=k) printf("%d\n",n-k);
        else printf("%d\n",bfs());
    }
    return 0;
}