#include <bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string>& A) {
    int n = A.size();
    vector<vector<int>> vvi(n, vector<int>(26, 0));
    for(int i=0; i<n; i++){
        for(auto c: A[i]){
            vvi[i][c-'a']++;
        }
    }
    vector<int> vi(26, INT_MAX);
    for(int i=0; i<n; i++){
        for(int j=0; j<26; j++){
            vi[j] = min(vi[j], vvi[i][j]);
        }
    }
    vector<string> ret;
    for(int i=0; i<26; i++){
        for(int j=0; j<vi[i]; j++){
            ret.emplace_back(string(1, i+'a'));
        }
    }
    return ret;
}

int main() {
    vector<string> strings = {"bella", "label", "roller"};
    vector<string> ans = commonChars(strings);
    for(const auto& s: ans){
        cout << s << endl;
    }
    return 0;
}