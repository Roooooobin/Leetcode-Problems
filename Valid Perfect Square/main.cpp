#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    if(num == 1) return true;
    for(int i=2; i<=(num/i); i++){
        if(i == (num/i) && (i * (num/i) == num)) return true;
    }
    return false;
}

int main() {
    cout << isPerfectSquare(8) << endl;
    return 0;
}
