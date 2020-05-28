#include <bits/stdc++.h>
using namespace std;

// leetcode-394
string helper(string& s, int& i) {
    string ans;
    while (i < s.size() && s[i] != ']') {
        // 不重复的字符串
        if (!isdigit(s[i])) {
            ans += s[i++];
        }
        else {
            int num = 0;
            while (i < s.size() && isdigit(s[i])) {
                num = num * 10 + s[i++] - '0';
            }
            ++i;    // skip [
            string t = helper(s, i);    // deal recursively
            ++i;    // skip ]
            while (num--) {
                ans += t;
            }
        }
    }
    return ans;
}

string decodeString(string s) {
    int i = 0;
    return helper(s, i);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
