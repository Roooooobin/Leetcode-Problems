#include <bits/stdc++.h>
using namespace std;

string reverseOnlyLetters(string S) {
    int i = 0;
    int j = S.size() - 1;
    while(i < j){
        while(i < j && !isalpha(S[i])){
            i++;
        }
        while(i < j && !isalpha(S[j])){
            j--;
        }
        if(i < j){
            swap(S[i++], S[j--]);
        }
    }
    return S;
}

int main() {
    string s = "Test1ng-Leet=code-Q!";
    string s1 = "a-bC-dEf-ghIj";
    cout << reverseOnlyLetters(s) << endl;
    return 0;
}