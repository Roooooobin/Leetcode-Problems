#include <bits/stdc++.h>
using namespace std;

double pi = 3.141592653589793;

int main() {
    int n;
    cin >> n;
    int a[103];
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    sort(a, a+n);
    long cnt = 0;
    for(int i=n-1; i>=1; i-=2){
        cnt += (a[i] * a[i] - a[i-1] * a[i-1]);
    }
    if(n % 2 == 1){
        cnt += a[0] * a[0];
    }
    printf("%.5f\n", cnt*1.0*pi);
    return 0;
}
