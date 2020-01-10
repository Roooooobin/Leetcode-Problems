#include <bits/stdc++.h>
using namespace std;

string convertToBase7(int num) {
    if(num == 0) return "0";
    string s;
    int sign = num < 0;
    if(sign) {
        num *= -1;
    }
    while(num){
        int x = num % 7;
        s += to_string(x);
        num /= 7;
    }
    if(sign){
        s += "-";
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    string s = convertToBase7(49);
    cout << s << endl;
    return 0;
}