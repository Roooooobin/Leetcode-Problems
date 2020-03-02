#include <bits/stdc++.h>
using namespace std;

// bellman ford
int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
    int inf = 1e9;
    vector<vector<int> > dp(k+2, vector<int>(n, inf));
    dp[0][src] = 0;
    for(int i=1; i<=k+1; ++i){
        dp[i][src] = 0;
        for(const auto& x: flights){
            dp[i][x[1]] = min(dp[i][x[1], dp[i-1][x[0]] + x[2]);
        }
    }
    return dp[k+1][dst] >= inf? -1: dp[k+1][dst];
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
