#include <bits/stdc++.h>
using namespace std;

// leetcode-1209 by Robin
string removeDuplicates(string s, int k) {
    vector<pair<int, char>> cnt_char = {{0, '#'}};
//    cnt_char.push_back(make_pair(0, '#'));
    for(char c: s){
        if(c != cnt_char.back().second){
            cnt_char.push_back({1, c});
        }
        else if(++cnt_char.back().first == k){
            cnt_char.pop_back();
        }
    }
    string ans;
    for(auto& p: cnt_char){
        ans += string(p.first, p.second);
    }
    return ans;
}

// reference: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/discuss/392933/JavaC%2B%2BPython-Two-Pointers-and-Stack-Solution
string removeDuplicates(string s, int k) {
    int i = 0, n = s.length();
    vector<int> count(n);
    for (int j = 0; j < n; ++j, ++i) {
        s[i] = s[j];
        count[i] = i > 0 && s[i - 1] == s[j] ? count[i - 1] + 1 : 1;
        if (count[i] == k) i -= k;
    }
    return s.substr(0, i);
}

int main() {
    cout << removeDuplicates("aabbbccdccd", 2) << endl;
    return 0;
}
