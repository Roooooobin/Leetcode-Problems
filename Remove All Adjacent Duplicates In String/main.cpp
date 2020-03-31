#include <bits/stdc++.h>
using namespace std;

// leetcode-1047 by Robin
string removeDuplicates(string S) {
    string ans;
    stack<char> sc;
    for(char c: S){
        if(sc.empty() || sc.top() != c){
            sc.push(c);
        }
        else{
            sc.pop();
        }
    }
    while(!sc.empty()){
        ans += sc.top();
        sc.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string S = "abbaca";
    cout << removeDuplicates(S) << endl;
    return 0;
}
