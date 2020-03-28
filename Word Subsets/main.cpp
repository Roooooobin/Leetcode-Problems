#include <bits/stdc++.h>
using namespace std;

bool isSubset(string s, int* b){
    for(char c: s){
        b[c-'a']--;
    }
    for(int i=0; i<26; ++i){
        if(b[i] > 0) return false;
    }
    return true;
}

vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
    vector<string> ans;
    int a[26] = {};
    for(string s: B){
        int tmp[26] = {};
        for(char c: s){
            tmp[c-'a']++;
        }
        for(int i=0; i<26; ++i){
            a[i] = max(a[i], tmp[i]);
        }
    }
//    for(int i=0; i<26; ++i){
//        cout << (char)(i+'a') << ' ' << a[i] << endl;
//    }
    for(string s: A){
        int b[26];
        for(int i=0; i<26; ++i){
            b[i] = a[i];
        }
        if(isSubset(s, b)){
            ans.push_back(s);
        }
    }
    return ans;
}

int main() {
    vector<string> A = {"amazon","apple","facebook","google","leetcode"};
    vector<string> B = {"eoo", "lo"};
    for(string s: wordSubsets(A, B)){
        cout << s << endl;
    }
    return 0;
}
