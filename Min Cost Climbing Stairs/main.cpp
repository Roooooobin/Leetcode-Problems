#include <bits/stdc++.h>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    vector<int> dp(n, 0);
    dp[0] = cost[0];
    dp[1] = cost[1];
    for(int i=2; i<n; i++){
        dp[i] = min(dp[i-1], dp[i-2]) + cost[i];
    }
    return min(dp[n-1], dp[n-2]);
}

int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    int x1 = cost[0], x2 = cost[1];
    for(int i=2; i<n; i++){
        int tmp = cost[i] + min(x1, x2);
        x1 = x2;
        x2 = tmp;
    }
    return min(x1, x2);
}

int main() {
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
//    vector<int> cost = {10, 15, 20};
    cout << minCostClimbingStairs(cost) << endl;
    return 0;
}
