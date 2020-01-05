#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int rfind(int x, vector<int>& par)
{
    int r = x;
    while(par[r] != r){
        r = par[r];
    }
    par[x] = r;
    while(x != r){
        int tmp = par[x];
        par[x] = r;
        x = tmp;
    }
    return r;
}

void combine(int x, int y, vector<int>& par)
{
    int px = rfind(x);
    int py = rfind(y);
    if(px != py){
        par[px] = py;
    }
}

int findCircleNum(vector<vector<int>>& M) {
    int n = M.size();
    vector<int> par(n, 0);
    for(int i=0; i<n; i++){
        par[i] = i;
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(M[i][j] == 1){
                combine(i, j, par);
            }
        }
    }
//    for(int i=0; i<n; i++){
//        cout << par[i] << endl;
//    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(par[i] == i) cnt++;
    }
    return cnt;
}

int main()
{
    int a[] = {1, 1, 0};
    int b[] = {1, 1, 0};
    int c[] = {0, 0, 1};
    vector<VI> M;
    VI A(a, a+3);
    VI B(b, b+3);
    VI C(c, c+3);
    M.push_back(A);
    M.push_back(B);
    M.push_back(C);
    cout << findCircleNum(M) << endl;
    return 0;
}
