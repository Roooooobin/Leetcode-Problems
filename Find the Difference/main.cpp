#include <bits/stdc++.h>
using namespace std;

char findTheDifference(string s, string t) {
    char ret = 0;
    for(char c: s){
        ret ^= c;
    }
    for(char c: t){
        ret ^= c;
    }
    return ret;
}

int main() {
    string s = "abcd";
    string t = "abecd";
    cout << findTheDifference(s, t) << endl;
    return 0;
}