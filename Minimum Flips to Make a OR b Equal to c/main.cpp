#include <bits/stdc++.h>
using namespace std;

int minFlips(int a, int b, int c) {
    int ans = 0;
    int bit_c;
    int cnt_1;
    while(a || b || c){
        bit_c = 0;
        cnt_1 = 0;
        if(a){
            cnt_1 += (a % 2);
            a >>= 1;
        }
        if(b){
            cnt_1 += (b % 2);
            b >>= 1;
        }
        if(c){
            bit_c = c % 2;
            c >>= 1;
        }
        if(bit_c == 1 && cnt_1 == 0){
            ans++;
        }
        else if(bit_c == 0){
            ans += cnt_1;
        }
    }
    return ans;
}

int main() {
    cout << minFlips(1, 2, 3) << endl;
    return 0;
}
