#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1, amount+1);
    dp[0] = 0;
    for(int i=1; i<=amount; i++){
        for(int coin: coins){
            if(coin <= i){
                dp[i] = min(dp[i-coin]+1, dp[i]);
            }
        }
    }
    return dp[amount] > amount? -1: dp[amount];
}

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1, amount+1);
    dp[0] = 0;
    for(int i=0; i<amount; i++){
        for(int coin: coins){
            if(coin <= amount - i){
                dp[i+coin] = min(dp[i+coin], dp[i]+1);
            }
        }
    }
    return dp[amount] > amount? -1: dp[amount];
}

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1, amount+1);
    dp[0] = 0;
    for(int coin: coins){
        for(int i=coin; i<=amount; i++){
            dp[i] = min(dp[i-coin]+1, dp[i]);
        }
    }
    return dp[amount] > amount? -1: dp[amount];
}

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 13;
    cout << coinChange(coins, amount) << endl;
    return 0;
}
