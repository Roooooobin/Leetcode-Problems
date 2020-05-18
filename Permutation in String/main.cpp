#include <bits/stdc++.h>
using namespace std;

bool isAllZero(int* hash) {
    for (int i=0; i<26; ++i) {
        if (hash[i] != 0) return false;
    }
    return true;
}

// leetcode-567 by Robin
bool checkInclusion(string s1, string s2) {
    if (s1.size() > s2.size()) return false;
    int hash[26] = {};   // 使用数组来保存各个字母的出现次数
    int len = s1.size();
    for (int i=0; i<len; ++i) {
        hash[s1[i]-'a']++;
        hash[s2[i]-'a']--;
    }
    if (isAllZero(hash)) {
        return true;
    }
    for (int i=len; i<s2.size(); ++i) {
        hash[s2[i]-'a']--;
        hash[s2[i-len]-'a']++;
        if (isAllZero(hash)) {
            return true;
        }
    }
    return false;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
