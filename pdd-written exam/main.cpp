#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n == 1) return 1;
    else return solve(n / 2) + 1;
}

int main() {
    int t;
    cin >> t;
    for(int k=0; k<t; ++k){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
