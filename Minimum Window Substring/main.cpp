#include <bits/stdc++.h>
using namespace std;

// leetcode-76 by Robin
bool containsAll(unordered_map<char, int>& s, unordered_map<char, int>& t) {
    for (const auto &p: t) {
        if (s[p.first] < p.second) return false;
    }
    return true;
}

string minWindow(string s, string t) {
    unordered_map<char, int> sHash, tHash;
    for (char& c: t) {
        ++tHash[c];
    }
    int l = 0, r = 0;
    int ansL = -1;
    int len = INT_MAX;
    while (r < s.size()) {
        ++sHash[s[r]];
        while (containsAll(sHash, tHash) && l <= r) {
            if (r - l + 1 < len) {
                len = r - l + 1;
                ansL = l;
            }
            if (tHash.count(s[l])) {
                --sHash[s[l]];
            }
            ++l;
        }
        ++r;
    }
    return ansL == -1? string(): s.substr(ansL, len);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
