#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

int LCD(int m, int n){
    if(m < n) return LCD(n, m);
    if(n == 0) return m;
    else return LCD(n, m%n);
}

long long quick_pow(long long x, int n){
    if(n == 1) return x % mod;
    else{
        long long r = quick_pow(x, n/2) % mod;
        if(n % 2 == 1) {
            r = r * x;
        }
        return r;
    }
}

int main() {
    int n, p, q;
    cin >> n >> p >> q;
    int a[100007];
    long long sum = 0;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        sum = (sum % mod + a[i] % mod) % mod;
    }
    int lcd = LCD(sum, q);
    sum /= lcd;
    q /= lcd;
    long long qq;
    if(q == 1){
        qq = 1;
    }
    else{
        qq = quick_pow(q, mod);
    }
    cout << sum * (long long)p * qq % mod << endl;
    return 0;
}
