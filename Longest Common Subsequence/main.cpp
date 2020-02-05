#include <bits/stdc++.h>
using namespace std;

int dp[1003][1003];

int longestCommonSubsequence(string text1, string text2) {
    vector<vector<short>> dp(text1.size() + 1, vector<short>(text2.size() + 1));
    for(int i=1; i<=text1.size(); i++){
        for(int j=1; j<=text2.size(); j++){
            if(text1[i-1] == text2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[text1.size()][text2.size()];
}

int longestCommonSubsequenceMemorySaved(string text1, string text2){
    if(text1.size() < text2.size()) return longestCommonSubsequenceMemorySaved(text2, text1);
    vector<vector<short>> dp(2, vector<short>(text2.size()+1));
    for(int i=1; i<=text1.size(); i++){
        for(int j=1; j<=text2.size(); j++){
            if(text1[i-1] == text2[j-1]){
                dp[i%2][j] = dp[(i-1)%2][j-1] + 1;
            }
            else{
                dp[i%2][j] = max(dp[i%2][j-1], dp[(i-1)%2][j]);
            }
        }
    }
    return dp[text1.size()%2][text2.size()];
}

int main() {
    string s = "def";
    string s1 = "abefxef";
    cout << s;
    cout << longestCommonSubsequence(s, s1) << endl;
    return 0;
}
