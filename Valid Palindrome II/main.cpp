#include <bits/stdc++.h>
using namespace std;

// leetcode-680 by Robin
bool isPalindrome(string s, int lo, int hi) {
    for (int i=lo, j=hi; i<j; ++i, --j) {
        if (s[i] != s[j]) {
            return false;
        }
    }
    return true;
}

bool validPalindrome(string s) {
    int n = s.size();
    string rs = s;
    reverse(rs.begin(), rs.end());
    if (rs == s) return true;
    int i = 0, j = n - 1;
    while (i < j) {
        if (s[i] == s[j]) {
            ++i;
            --j;
        }
        else {
            return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
        }
    }
    return true;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
