#include <bits/stdc++.h>
using namespace std;

int maximalSquare(vector<vector<char>>& matrix) {
    if(matrix.empty() || matrix[0].empty()) return 0;
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int> > dp(n, vector<int>(m, 0));
    int ans = -1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i == 0 || j == 0){
                dp[i][j] = (matrix[i][j] == '1');
            }
            else{
                if(matrix[i][j] == '1'){
                    dp[i][j] = min(min(dp[i-1][j-1], dp[i-1][j]), dp[i][j-1]) + 1;
                }
            }
            ans = max(ans, dp[i][j]);
        }
    }
//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++){
//            cout << dp[i][j] << ' ';
//        }
//        cout << endl;
//    }
    return ans * ans;
}

int main() {
    vector<vector<char> > mat;
    vector<char> vi = {'1', '0', '1', '0', '0'};
    vector<char> vi2 = {'1', '1', '1', '1', '0'};
    vector<char> vi3 = {'1', '1', '1', '1', '1'};
    vector<char> vi4 = {'1', '1', '1', '1', '0'};
    mat.push_back(vi);
    mat.push_back(vi2);
    mat.push_back(vi3);
    mat.push_back(vi4);
    cout << maximalSquare(mat) << endl;
    return 0;
}
