#include <bits/stdc++.h>
using namespace std;

int w[1003];
int par[1003];

int rfind(int x){
    int r = x;
    while(par[r] != r){
        r = par[r];
    }
    while(par[x] != r){
        int tmp = par[x];
        par[x] = r;
        x = tmp;
    }
    return r;
}

void combine(int x, int y){
    x = rfind(x);
    y = rfind(y);
    if(x != y){
        par[x] = y;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    for(int i=1; i<=n; ++i){
        cin >> w[i];
    }
    for(int i=1; i<=n; ++i){
        par[i] = i;
    }
    int x, y;
    vector<vector<int>> paths;
    for(int i=0; i<n-1; ++i){
        cin >> x >> y;
        paths.push_back(vector<int>{x, y});
    }
    int max_ = INT_MIN, min_ = INT_MAX;
    if(k == 0){
        for(int i=0; i<n-1; ++i){
            combine(paths[i][0], paths[i][1]);
        }
        vector<int> sum_(n+1, 0);
        for(int i=1; i<=n; ++i){
            sum_[rfind(i)] += w[i];
        }
        for(int i=1; i<=n; ++i){
            min_ = min(min_, sum_[i]);
            max_ = max(max_, sum_[i]);
        }
        min_ = max_;
    }
    else{
        for(int del=0; del<n-1; ++del){
            for(int i=1; i<=n; ++i){
                par[i] = i;
            }
            for(int i=0; i<n-1; ++i){
                if(i != del){
                    combine(paths[i][0], paths[i][1]);
                }
            }
            vector<int> sum_(n+1, 0);
            for(int i=1; i<=n; ++i){
                sum_[rfind(i)] += w[i];
            }
            for(int i=1; i<=n; ++i){
                min_ = min(min_, sum_[i]);
                max_ = max(max_, sum_[i]);
            }
        }
        int rr = rfind(1);
        int idx;
        for(idx=1; idx<=n; ++idx){
            if(rfind(idx) != rr) break;
        }
        if(idx == n+1) min_ = max_;
    }
//    for(int i=1; i<=n; ++i){
//        cout << rfind(i) << ' ';
//    }
    cout << min_ << ' ' << max_ << endl;
    return 0;
}

/*
6 0
-3 1 -2 3 4 0
1 2
1 3
2 4
3 5
3 6
 */