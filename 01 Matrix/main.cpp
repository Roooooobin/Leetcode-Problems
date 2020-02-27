#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
    if(matrix.empty() || matrix[0].empty()) return matrix;
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n, vector<int>(m, n*m+1));
    // first pass
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                dp[i][j] = 0;
            }
            else{
                if(i > 0){
                    dp[i][j] = min(dp[i][j], dp[i-1][j]+1);
                }
                if(j > 0){
                    dp[i][j] = min(dp[i][j], dp[i][j-1]+1);
                }
            }
        }
    }
    // second pass
    for(int i=n-1; i>=0; i--){
        for(int j=m-1; j>=0; j--){
            if(i < n-1){
                dp[i][j] = min(dp[i][j], dp[i+1][j]+1);
            }
            if(j < m-1){
                dp[i][j] = min(dp[i][j], dp[i][j+1]+1);
            }
        }
    }
    return dp;
}

int main() {

    return 0;
}
