#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n == 0 || n == 1) cout << 1 << endl;
    else{
        long long a = 1, b = 1;
        for(int i=2; i<=n; i++){
            b = a + b;
            a = b - a;
        }
        cout << b << endl;
    }
    return 0;
}
