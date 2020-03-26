#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

int main() {
    int n, k;
    cin >> n >> k;
    int a[10003];
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    for(int i=0; i<k; ++i){
        for(int j=1; j<n; ++j){
            a[j] = (a[j-1] % mod + a[j] % mod) % mod;
        }
    }
    cout << (a[n-1] % mod) << endl;
    return 0;
}
