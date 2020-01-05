#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int minPathSum(vector<vector<int>>& grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i != 0 && j != 0){
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            }
            else if(i == 0 && j != 0){
                dp[i][j] = dp[i][j-1] + grid[i][j];
            }
            else if(i != 0 && j == 0){
                dp[i][j] = dp[i-1][j] + grid[i][j];
            }
            else{
                dp[i][j] = grid[i][j];
            }
        }
    }
    return dp[n-1][m-1];
}

int main()
{
    int a[3] = {1, 3, 1};
    int b[3] = {1, 5, 1};
    int c[3] = {4, 2, 1};
    VI va(a, a+3);
    VI vb(b, b+3);
    VI vc(c, c+3);
    vector< VI > V;
    V.push_back(va);
    V.push_back(vb);
    V.push_back(vc);
    cout << minPathSum(V) << endl;
    return 0;
}
