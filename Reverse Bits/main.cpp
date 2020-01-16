#include <bits/stdc++.h>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    int res = 0;
    for(int i=0; i<32; i++){
        res = (res << 1) + (n & 1);
        n >>= 1;
    }
    return res;
}

int main() {
    cout << reverseBits(43261596) << endl;
    return 0;
}
