#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 607;
typedef long long LL;
typedef vector<int> VI;

int dis[MAXN];
int cost[MAXN][MAXN];

int dijkstra(int n, int st)
{
    int vis[MAXN] = {};
    vis[st] = 1;
    for(int i=1; i<=n; i++){
        dis[i] = cost[st][i];
    }
    for(int i=0; i<n; i++){
        //find the min length
        int _min = INF;
        int nxt = 0;
        for(int j=1; j<=n; j++){
            if(!vis[j] && dis[j] != INF && dis[j] < _min){
                _min = dis[j];
                nxt = j;
            }
        }
        if(nxt == 0) continue;
        vis[nxt] = 1;
        for(int k=1; k<=n; k++){
            if(!vis[k] && cost[nxt][k] < INF){
                if(cost[nxt][k] + dis[nxt] < dis[k]){
                    dis[k] = cost[nxt][k] + dis[nxt];
                }
            }
        }
    }
    return dis[n];
}

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cost[i][j] = INF;
        }
    }
    int x, y, val;
    for(int i=0; i<m; i++){
        cin >> x >> y >> val;
        cost[x][y] = val;
    }
    int ans = dijkstra(n, 1);
    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
