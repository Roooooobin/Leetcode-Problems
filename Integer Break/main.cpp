#include <bits/stdc++.h>
using namespace std;

int integerBreak(int n) {
    if(n == 2) return 1;
    if(n == 3) return 2;
    int num_3 = n / 3;
    int product = 1;
    for(int i=0; i<num_3; i++){
        product *= 3;
    }
    if(n % 3 == 1){
        product = product / 3 * 4;
    }
    else if(n % 3 == 2){
        product *= 2;
    }
    return product;
}

int main() {
    cout << integerBreak(10) << endl;
    return 0;
}