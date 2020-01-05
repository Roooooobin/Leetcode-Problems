#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 107;
typedef long long LL;
typedef vector<int> VI;

int n, m;
int cost[MAXN][MAXN];
int dist[MAXN];

void init(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cost[i][j] = INF;
        }
    }
}

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
        int nxt = 0;
        for(int j=1; j<=n; j++){
            if(!vis[j] && dist[j] < _min){
                _min = dist[j];
                nxt = j;
            }
        }
        if(nxt == 0) continue;
        vis[nxt] = 1;
        for(int j=1; j<=n; j++){
            if(!vis[j] && dist[nxt]+cost[nxt][j]<dist[j]){
                dist[j] = dist[nxt] + cost[nxt][j];
            }
        }
    }
    return dist[n];
}

int main()
{
    while(cin >> n >> m && m && n){
        init(n);
        int x, y, val;
        while(m--){
            cin >> x >> y >> val;
            cost[x][y] = cost[y][x] = val;
        }
        cout << dijkstra(1, n) << endl;
    }
    return 0;
}
