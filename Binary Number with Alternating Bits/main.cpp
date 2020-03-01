#include <bits/stdc++.h>
using namespace std;

bool hasAlternatingBits(int n) {
    int x = n & 1;
    n >>= 1;
    while(n){
        if(x == (n & 1)) return false;
        x = n & 1;
        n >>= 1;
    }
    return true;
}

int main() {
    cout << hasAlternatingBits(10) << endl;
    return 0;
}
