#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[103][4];
    for(int i=0; i<n; ++i){
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    }
    int dp[121] = {};
    for(int i=0; i<n; ++i){
        for(int j=120; j>=0; --j){
            if(j >= a[i][0] && j >= a[i][2]){
                dp[j] = max(dp[j], max(dp[j-a[i][0]]+a[i][1], dp[j-a[i][2]]+a[i][3]));
            }
            else if(j >= a[i][0]){
                dp[j] = max(dp[j], dp[j-a[i][0]]+a[i][1]);
            }
            else if(j >= a[i][2]){
                dp[j] = max(dp[j], dp[j-a[i][2]]+a[i][3]);
            }
        }
    }
    cout << dp[120] << endl;
    return 0;
}
