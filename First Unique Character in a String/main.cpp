#include <bits/stdc++.h>
using namespace std;

//int firstUniqChar(string s) {
//    map<char, int> mci;
//    for(int i=0; i<s.size(); i++){
//        if(s.find(s[i], i+1) == -1 && !mci.count(s[i])){
//            return i;
//        }
//        mci[s[i]] = 1;
//    }
//    return -1;
//}

int firstUniqChar(string s) {
    unordered_map<char, int> umci;
    for(char i : s){
        umci[i]++;
    }
    for(int i=0; i<s.size(); i++){
        if(umci[s[i]] == 1) return i;
    }
    return -1;
}

int main() {
    cout << firstUniqChar("leeottccoel") << endl;
    return 0;
}