#include <bits/stdc++.h>
using namespace std;

// leetcode-122 by Robin
int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int min_ = prices[0], max_ = prices[0];
    int i = 0;
    int max_profit = 0;
    while(i < n-1){
        while(i < n-1 && prices[i+1] <= prices[i]) i++;
        min_ = prices[i];
        while(i < n-1 && prices[i+1] >= prices[i]) i++;
        max_ = prices[i];
        max_profit += max_ - min_;
    }
    return max_profit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices) << endl;
    return 0;
}
