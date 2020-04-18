#include <bits/stdc++.h>
using namespace std;

// leetcode-678
bool checkValidString(string s) {
    int cnt_left = 0, cnt_right = 0, cnt_star = 0;
    for(int i=0; i<s.size(); ++i){
        if(s[i] == '('){
            cnt_left++;
        }
        else if(s[i] == ')'){
            cnt_right++;
            if(cnt_right - cnt_left > cnt_star){
                return false;
            }
            if(cnt_left > 0){
                cnt_left--;
            }
            else{
                cnt_star--;
            }
            cnt_right--;
        }
        else{
            cnt_star++;
        }
    }
    if(cnt_left > cnt_star) return false;
    cnt_left = 0, cnt_right = 0, cnt_star = 0;
    for(int i=s.size()-1; i>=0; --i){
        if(s[i] == ')'){
            cnt_right++;
        }
        else if(s[i] == '('){
            cnt_left++;
            if(cnt_left - cnt_right > cnt_star){
                return false;
            }
            if(cnt_right > 0){
                cnt_right--;
            }
            else{
                cnt_star--;
            }
            cnt_left--;
        }
        else{
            cnt_star++;
        }
    }
    return cnt_right <= cnt_star;
}

int main() {
    cout << checkValidString("()") << endl;
    cout << checkValidString("(*)") << endl;
    cout << checkValidString("(*)))") << endl;
    cout << checkValidString("*)()") << endl;
    cout << checkValidString("*()") << endl;
    return 0;
}
