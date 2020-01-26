#include <bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2) {
    int i = num1.size() - 1, j = num2.size() - 1;
    int carry = 0;
    string ret;
    while(i >= 0 || j >= 0 || carry){
        int sum = 0;
        if(i >= 0) sum += (num1[i--] - '0');
        if(j >= 0) sum += (num2[j--] - '0');
        sum += carry;
        carry = sum / 10;
        sum = sum % 10;
        ret += to_string(sum);
    }
    reverse(ret.begin(), ret.end());
    return ret;
}

int main() {
    string ans = addStrings("0", "1");
    cout << ans << endl;
    return 0;
}
