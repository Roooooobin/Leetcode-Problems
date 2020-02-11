#include <bits/stdc++.h>
using namespace std;

int countSquares(vector<vector<int>>& matrix) {
    if(matrix.empty() || matrix[0].empty()) return 0;
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int> > dp(n+1, vector<int>(m+1, 0));
    int sum = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(matrix[i-1][j-1]){
                    dp[i][j] = min(min(dp[i-1][j-1], dp[i-1][j]), dp[i][j-1]) + 1;
            }
            sum += dp[i][j];
        }
    }
    return sum;
}

int main() {
    vector<vector<int> > mat;
    vector<int> vi = {1, 0, 1, 0, 0};
    vector<int> vi2 = {1, 1, 1, 1, 0};
    vector<int> vi3 = {1, 1, 1, 1, 1};
    vector<int> vi4 = {1, 1, 1, 1, 0};
    mat.push_back(vi);
    mat.push_back(vi2);
    mat.push_back(vi3);
    mat.push_back(vi4);
    cout << countSquares(mat) << endl;
    return 0;
}
