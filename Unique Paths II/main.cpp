#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//    if(obstacleGrid[0][0] == 1) return 0;
//    int n = obstacleGrid.size();
//    int m = obstacleGrid[0].size();
//    int dp[103][103] = {};
//    dp[0][0] = 1;
//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++){
//            if(obstacleGrid[i][j] == 1){
//                dp[i][j] = 0;
//            }
////            else if(i==0 || j==0){
////                dp[i][j] = 1;
////            }
//            else if(i != 0 && j != 0){
//                dp[i][j] = dp[i-1][j] + dp[i][j-1];
//            }
//            else if(i == 0 && j == 0){
//                dp[i][j] = 1;
//            }
//            else if(i == 0){
//                dp[i][j] = dp[i][j-1];
//            }
//            else if(j == 0){
//                dp[i][j] = dp[i-1][j];
//            }
//        }
//    }
//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++){
//            cout << dp[i][j] << ' ';
//        }
//        cout << endl;
//    }
//    return dp[n-1][m-1];
//}

int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    dp[0][1] = 1;
    for(int i=1; i<=m; ++i){
        for(int j=1; j<=n; ++j){
            if(!obstacleGrid[i-1][j-1]){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
    }
    return dp[m][n];
}

int main()
{
    int a[3] = {0, 0, 0};
    VI vi(a, a+3);
    int b[3] = {0, 1, 0};
    VI v(b, b+3);
    vector< VI > vvi;
    vvi.push_back(vi);
    vvi.push_back(v);
    vvi.push_back(vi);
    cout << uniquePathsWithObstacles(vvi) << endl;
    return 0;
}
