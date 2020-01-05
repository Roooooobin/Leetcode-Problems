#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

vector<string> solve(vector<string>& ans, char numLetter[][10], int i, int n, string s, string digits)
{
    if(i == n-1){
        for(int j=0; j<strlen(numLetter[digits[i]-'0']); j++){
            ans.push_back(s+numLetter[digits[i]-'0'][j]);
        }
    }
    else{
        for(int j=0; j<strlen(numLetter[digits[i]-'0']); j++){
            ans = solve(ans, numLetter, i+1, n, s+numLetter[digits[i]-'0'][j], digits);
        }
    }
    return ans;
}

vector<string> letterCombinations(string digits) {
    char num_letter[10][10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv",
                           "wxyz"};
    int n = digits.size();
    vector<string> ans;
    return solve(ans, num_letter, 0, n, "", digits);
}

int main()
{
    vector<string> vs = letterCombinations("8");
    for(auto s: vs){
        cout << s << endl;
    }
    return 0;
}
