#include <bits/stdc++.h>
using namespace std;

int titleToNumber(string s) {
    int ret = 0;
    for(auto x: s){
        ret = ret * 26 + (x - 'A' + 26) % 26 + 1;
    }
    return ret;
}

int main() {
    cout << titleToNumber("AB");
    return 0;
}