#include <bits/stdc++.h>
using namespace std;

bool can_chained(int ci[26], int cj[26]){
    int longer = 0;
    for(int i=0; i<26; ++i){
        if(ci[i] < cj[i] || ci[i] > cj[i] + 1) return false;
        if(ci[i] == cj[i] + 1){
            if(longer == 0){
                longer = 1;
            }
            else{
                return false;
            }
        }
    }
    return true;
}

int longestStrChain(vector<string>& words) {
    int n = words.size();
    if(n == 1) return 1;
    sort(words.begin(), words.end(), [](string a, string b){
        return a.size() < b.size();
    });
    for(auto x: words){
        cout << x << ' ';
    }
    int char_count[1003][26];
    for(int i=0; i<n; ++i){
        for(char c: words[i]){
            char_count[i][c-'a']++;
        }
    }
//    for(int i=0; i<n; ++i){
//        cout << i << ':';
//        for(int j=0; j<26; ++j){
//            if(char_count[i][j]) cout << char(j+'a') << ':' << char_count[i][j] << endl;
//        }
//    }

    vector<int> dp(n, 1);
    for(int i=1; i<n; ++i){
        for(int j=0; j<i; ++j){
            if(words[j].size() == words[i].size()) continue;
            if(can_chained(char_count[i], char_count[j])){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    int max_ = -1;
    for(int x: dp){
        max_ = max(max_, x);
    }
    return max_;
}

int longestStrChain(vector<string>& words) {
    sort(words.begin(), words.end(), [](string a, string b){
        return a.size() < b.size();
    });
    unordered_map<string, int> dp;
    int res = 1;
    for (string w: words) {
        for (int i=0; i<w.size(); ++i) {
            dp[w] = max(dp[w], dp[w.substr(0, i) + w.substr(i + 1)] + 1);
        }
        res = max(res, dp[w]);
    }
    return res;
}

int main() {
    vector<string> words = {"ksqvsyq","ks","kss","czvh","zczpzvdhx","zczpzvh","zczpzvhx","zcpzvh","zczvh","gr","grukmj","ksqvsq","gruj","kssq","ksqsq","grukkmj","grukj","zczpzfvdhx","gru"};
    cout << longestStrChain(words) << endl;
    return 0;
}
