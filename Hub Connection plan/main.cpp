#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e3 + 7;
typedef long long LL;
typedef vector<int> VI;

int cost[MAXN][MAXN];
int dist[MAXN];

//int Prim(int st, int n)
//{
//    bool vis[MAXN] = {};
//    vis[st] = true;
//    for(int i=1; i<=n; i++){
//        dist[i] = cost[st][i];
//    }
//    int ans = 0;
//    int _min;
//    int nxt;
//    for(int i=1; i<=n; i++){
//        _min = INF;
//        nxt = 0;
//        for(int j=1; j<=n; j++){
//            if(!vis[j] && dist[j] < _min){
//                _min = dist[j];
//                nxt = j;
//            }
//        }
//        if(nxt == 0) continue;
//        vis[nxt] = true;
//        ans += _min;
//        for(int j=1; j<=n; j++){
//            if(!vis[j] && dist[j] > cost[nxt][j]){
//                dist[j] = cost[nxt][j];
//            }
//        }
//    }
//    return ans;
//}

struct EDGE
{
    int l;
    int r;
    int len;
    EDGE(int x, int y, int w): l(x), r(y), len(w){}
    bool operator < (const EDGE& ano) const
    {
        return len < ano.len;
    }
};

vector<EDGE> edges;
int par[MAXN];

int rfind(int x)
{
    int r = x;
    while(r != par[r]){
        r = par[r];
    }
    par[x] = r;
    while(x != r){
        int t = par[x];
        par[x] = r;
        x = t;
    }
    return r;
}

void combine(int x, int y)
{
    x = rfind(x);
    y = rfind(y);
    if(x != y){
        par[x] = y;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int x, y, val;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cost[i][j] = INF;
        }
    }
    for(int i=0; i<m; i++){
        cin >> x >> y >> val;
        edges.push_back(EDGE(x, y, val));
    }
    sort(edges.begin(), edges.end());
    for(int i=1; i<=n; i++){
        par[i] = i;
    }
    int ans = 0;
    for(int i=0; i<m; i++){
        x = edges[i].l;
        y = edges[i].r;
        if(rfind(x) != rfind(y)){
            combine(x, y);
            ans += edges[i].len;
        }
    }
    cout << ans << endl;
//    for(auto x: edges){
//        cout << x.l << ' ' << x.r << ' ' << x.len << endl;
//    }
    return 0;
}
