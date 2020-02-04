#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    for(int i=0; i<s.size()/2; i++){
        if(s[i] != s[s.size()-i-1]) return false;
    }
    return true;
}

void backtracking(int pos, string s, vector<string>& ret, vector<vector<string>>& ans){
    if(pos >= s.size()){
        ans.push_back(ret);
        return;
    }
    for(int i=0; i<s.size()-pos; i++){
        string cur(s.begin()+pos, s.begin()+pos+i+1);
        if(isPalindrome(cur)){
            ret.push_back(cur);
            backtracking(pos+i+1, s, ret, ans);
            ret.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<string> > ans;
    vector<string> ret;
    backtracking(0, s, ret, ans);
    return ans;
}

int main() {
    string s = "ac";
    vector<vector<string>> ans = partition(s);
    for(auto v: ans){
        for(auto x: v){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
