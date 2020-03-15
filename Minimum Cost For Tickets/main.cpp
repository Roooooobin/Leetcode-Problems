#include <bits/stdc++.h>
using namespace std;

int mincostTickets(vector<int>& days, vector<int>& costs) {
    vector<int> pass = {1, 7, 30};
    int n = days.size();
    vector<int> dp(n, 0);
    for(int i=0; i<n; i++){
        dp[i] = (i+1) * costs[0];
    }
    dp[0] = costs[0];
    int c;
    for(int j=0; j<n; j++){
        for(int i=0; i<3; i++){
            int idx2 = lower_bound(days.begin(), days.end(), days[j]-pass[i]+1) - days.begin() - 1;
            if(idx2 == -1){
                c = 0;
            }
            else{
                c = dp[idx2];
            }
            dp[j] = min(dp[j], c+costs[i]);
        }
    }
    return dp[n-1];
}

int main() {
//    vector<int> days = {1, 4, 6, 7, 8, 20};
    vector<int> days = {1,2,3,4,5,6,7,8,9,10,30,31};
    vector<int> costs = {2, 7, 15};
    cout << mincostTickets(days, costs) << endl;
    return 0;
}
