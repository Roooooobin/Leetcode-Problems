#include <bits/stdc++.h>
using namespace std;

// leetcode-32 by Robin
int longestValidParentheses(string s) {
    stack<int> sc;
    int longest = 0;
    int i = 0;
    while(i < s.size()){
        if(!sc.empty() && s[i] == ')' && s[sc.top()] == '('){
            sc.pop();
            if(sc.empty()){
                longest = max(longest, i + 1);
            }
            else longest = max(longest, i - sc.top());
        }
        else{
            sc.push(i);
        }
        ++i;
    }
    return longest;
}

int main() {
    cout << longestValidParentheses("(((((((())))))))") << endl;
    return 0;
}
