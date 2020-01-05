#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e3 + 7;
typedef long long LL;
typedef vector<int> VI;

int cost[MAXN][MAXN];
int dist[MAXN];
int src[MAXN];
int des[MAXN];
int max_n;
int T, S, D;
int a, b, val;

int dijkstra(int st, int n)
{
    int vis[MAXN] = {};
    vis[st] = 1;
    for(int i=1; i<=n; i++){
        dist[i] = cost[st][i];
        //cout << dist[i] << endl;
    }
    for(int i=1; i<=n; i++){
        int _min = INF;
        int nxt = -1;
        for(int j=1; j<=n; j++){
            if(!vis[j] && dist[j] < _min){
                _min = dist[j];
                nxt = j;
            }
        }
        if(nxt == -1) continue;
        vis[nxt] = 1;
        for(int j=1; j<=n; j++){
            if(!vis[j] && dist[nxt]+cost[nxt][j]<dist[j]){
                dist[j] = dist[nxt] + cost[nxt][j];
            }
        }
    }
    return dist[n];
}

void init()
{
    memset(cost, INF, sizeof(cost));
    for(int i=0; i<MAXN; i++){
        cost[i][i] = 0;
    }
    memset(src, 0, sizeof(src));
    memset(des, 0, sizeof(des));
    max_n = -1;
}

int main()
{
    while(scanf("%d%d%d", &T, &S, &D) == 3){
        init();
        for(int i=0; i<T; i++){
            scanf("%d%d%d", &a, &b, &val);
            max_n = max(max(a, b), max_n);
            //only save the minimum path between a, b
            if(val < cost[a][b]){
                cost[a][b] = cost[b][a] = val;
            }
        }
        int j = 0;
        int x;
        //create super start and end to avoid duplicate dijkstra
        for(int i=0; i<S; i++){
            scanf("%d", &x);
            src[j] = x;
            cost[0][src[j]] = cost[src[j]][0] = 0;
            j++;
        }
        j = 0;
        for(int i=0; i<D; i++){
            scanf("%d", &x);
            des[j] = x;
            cost[max_n+1][des[j]] = cost[des[j]][max_n+1] = 0;
            j++;
        }
        cout << dijkstra(0, max_n+1) << endl;
    }
    return 0;
}

