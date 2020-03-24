#include <bits/stdc++.h>
using namespace std;

vector<int> l, h;

int main() {
    int n;
    cin >> n;
    int easy, hard;
    for(int i=0; i<n; ++i){
        cin >> easy >> hard;
        l.push_back(easy);
        h.push_back(hard);
    }
    int dp[1003];
    dp[0] = max(l[0], h[0]);
    dp[1] = max(dp[0]+l[1], h[1]);
    for(int i=2; i<n; ++i) {
        dp[i] = max(dp[i-1]+l[i], dp[i-2]+h[i]);
    }
    cout << dp[n-1] << endl;
    return 0;
}
