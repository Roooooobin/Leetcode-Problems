#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s) {
    int i = 0, j = s.size() - 1;
    set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    while(i < j){
        while(i < j && !vowels.count(s[i])) i++;
        while(i < j && !vowels.count(s[j])) j--;
        if(i < j) swap(s[i], s[j]);
        i++, j--;
    }
    return s;
}

int main() {
    cout << reverseVowels("leetcode") << endl;
    return 0;
}
