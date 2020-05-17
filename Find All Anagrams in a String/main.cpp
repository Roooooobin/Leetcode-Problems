#include <bits/stdc++.h>
using namespace std;

bool equals(int* p, int* s) {
    for (int i=0; i<26; ++i) {
        if (p[i] != s[i]) return false;
    }
    return true;
}

// leetcode-438 by Robin
vector<int> findAnagrams(string s, string p) {
    if (p.size() > s.size()) return vector<int>{};
    int pHash[26] = {};
    int sHash[26] = {};   // 使用数组来保存各个字母的出现次数
    for (char ch: p) {
        pHash[ch - 'a']++;
    }
    int len = p.size();
    for (int i=0; i<len; ++i) {
        sHash[s[i]-'a']++;
    }
    vector<int> ans;
    if (equals(pHash, sHash)) {
        ans.push_back(0);
    }
    for (int i=1; i<=s.size()-len; ++i) {
        sHash[s[i-1]-'a']--;
        sHash[s[i+len-1]-'a']++;
        if (equals(pHash, sHash)) {
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
