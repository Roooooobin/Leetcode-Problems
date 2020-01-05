#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    map<char, char> m1;
    map<char, char> m2;
    int len = s.size();
    for(int i=0; i<len; i++){
        if ((m1[s[i]] || m2[t[i]])&&(m1[s[i]] != t[i] || m2[t[i]] != s[i])) return false;
        m1[s[i]] = t[i];
        m2[t[i]] = s[i];
    }
    return true;
}

int main() {
    cout << isIsomorphic("paper", "title") << endl;
    return 0;
}