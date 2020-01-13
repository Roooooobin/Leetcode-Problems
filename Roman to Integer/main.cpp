#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    if (s.empty()) return 0;
    int roman[26] = {};
    roman['I'-'A'] = 1;
    roman['V'-'A'] = 5;
    roman['X'-'A'] = 10;
    roman['L'-'A'] = 50;
    roman['C'-'A'] = 100;
    roman['D'-'A'] = 500;
    roman['M'-'A'] = 1000;
    int sum = 0;
    int right = roman[s.front()-'A'];
    for (int i=1; i<s.size(); ++i) {
        int cur = right;
        right = roman[s[i]-'A'];
        if (right > cur) sum -= cur;
        else sum += cur;
    }
    return sum + right;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}