#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int n) {
    string ret;
    while(n){
        ret += ((n % 26 + 25) % 26 + 'A');
        n = (n-1) / 26;
    }
    reverse(ret.begin(), ret.end());
    return ret;
}

int main() {
    string ans = convertToTitle(52);
    cout << ans << endl;
    return 0;
}