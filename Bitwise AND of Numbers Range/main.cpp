#include <bits/stdc++.h>
using namespace std;

int rangeBitwiseAnd(int m, int n) {
    while(m < n){
        n &= (n-1);
    }
    return n;
}

int main() {
    cout << rangeBitwiseAnd(5, 7) << endl;
    return 0;
}