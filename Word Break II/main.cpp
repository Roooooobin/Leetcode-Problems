#include <bits/stdc++.h>
using namespace std;

// leetcode-140 by Robin(TLE)
//vector<string> wordBreak(string s, vector<string>& wordDict) {
//    set<string> hash;
//    for(const string& word: wordDict){
//        hash.insert(word);
//    }
//    unordered_map<int, vector<string> > records;  // 记录当前index下的单词情况
//    int n = s.length();
//    vector<bool> dp(n+1, false);
//    for(int i=0; i<n; ++i){
//        for(int j=0; j<=i; ++j){
//            string word = s.substr(j, i-j+1);
//            if(j == 0 && hash.count(word)){
//                dp[i] = true;
//                vector<string> vs;
//                vs.push_back(word);
//                records[i] = vs;
//            }
//            else if(j != 0 && dp[j-1] && hash.count(word)){
//                dp[i] = true;
//                for(auto s: records[j-1]){
//                    string cur = s + " " + word;
//                    records[i].push_back(cur);
//                }
//            }
//        }
//    }
//    return dp[n-1] == true? records[n-1]: vector<string>{};
//}

class Solution {
    unordered_map<string, vector<string>> hash;

    vector<string> combine(string word, vector<string> prev){
        for(int i=0; i<prev.size(); ++i){
            prev[i] += " " + word;
        }
        return prev;
    }

public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        return helper(s, dict);
    }

    vector<string> helper(string s, unordered_set<string>& dict) {
        if(hash.count(s)) return hash[s];  //take from memory
        vector<string> result;
        if(dict.count(s)){
            result.push_back(s);
        }
        for(int i=1;i<s.size();++i){
            string word=s.substr(i);
            if(dict.count(word)){
                string rem = s.substr(0,i);
                vector<string> prev = combine(word, helper(rem,dict));
                result.insert(result.end(), prev.begin(), prev.end());
            }
        }
        hash[s] = result; //memorize
        return result;
    }
};

int main() {
    vector<string> words = {"leet", "code"};
    vector<string> words2 = {"cats", "dog", "sand", "and", "cat"};
    string s = "catsanddog";
    vector<string> ans = wordBreak(s, words2);
    for(auto s: ans){
        cout << s << endl;
    }
    cout << s.substr(4) << endl;
    return 0;
}
