#include <bits/stdc++.h>
using namespace std;

int findComplement(int num) {
    long x = 1;
    while(x <= num){
        x <<= 1;
    }
    return (x-1) ^ num;
}

int main() {
    cout << findComplement(5) << endl;
    return 0;
}
