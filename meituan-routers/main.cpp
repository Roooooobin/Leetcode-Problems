#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[100007];
    int signal[100007];
    for(int i=0; i<n; ++i){
        cin >> a[i];
        signal[max(i-a[i], 0)]++;
        signal[min(i+a[i], n-1)+1]--;
    }
    int sig = 0;
    int cnt = 0;
    for(int i=0; i<=n; ++i){
        sig += signal[i];
        if(sig >= k) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
