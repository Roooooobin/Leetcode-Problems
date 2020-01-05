#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int uniquePaths(int m, int n) {
    int dp[103][103] = {};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 1;
            }
            else{
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
    }
    return dp[n-1][m-1];
}

int main()
{
    cout << uniquePaths(3, 2) << endl;
    return 0;
}
