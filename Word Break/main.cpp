#include <bits/stdc++.h>
using namespace std;

// leetcode-139 by Robin
bool wordBreak(string s, vector<string>& wordDict) {
    set<string> hash;
    for(const string& word: wordDict){
        hash.insert(word);
    }
    int n = s.length();
    vector<bool> dp(n+1, false);
    for(int i=0; i<n; ++i){
        for(int j=0; j<=i; ++j){
            if((j == 0 || dp[j-1]) && hash.count(s.substr(j, i-j+1))){
                dp[i] = true;
            }
        }
    }
    return dp[n-1];
}

int main() {
    vector<string> words = {"leet", "code"};
    vector<string> words2 = {"cats", "dog", "sand", "and", "cat"};
    string s = "leetcodecodeleet";
    cout << wordBreak(s, words) << endl;
    cout << wordBreak("catsandog", words2) << endl;
    return 0;
}
