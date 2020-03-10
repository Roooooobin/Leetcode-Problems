#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {
    if(num.size() <= k) return "0";
    string ans;
    for(char c: num){
        while(!ans.empty() && ans.back() > c && k){
            ans.pop_back();
            k--;
        }
        if(!ans.empty() || c != '0') ans.push_back(c);
    }
    while(k--) ans.pop_back();
    return ans.empty()? "0": ans;
}

int main() {
    string num = "432263";
    cout << removeKdigits(num, 5) << endl;
    return 0;
}
