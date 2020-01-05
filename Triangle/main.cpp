#include <bits/stdc++.h>
using namespace std;

int minimumTotal(vector<vector<int> > &triangle) {
    int n = triangle.size();
    vector<int> dp(triangle.back());
    for(int l=n-2; l>=0; l--){
        for(int i=0; i<=l; i++){
            dp[i] = min(dp[i], dp[i+1]) + triangle[l][i];
        }
    }
    return dp[0];
}

int main() {

    return 0;
}