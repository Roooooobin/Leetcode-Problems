#include <bits/stdc++.h>
using namespace std;

// leetcode-Perform String Shifts by Robin
string stringShift(string s, vector<vector<int>>& shift) {
    int right_shift_cnt = 0;
    for(vector<int>& vi: shift){
        if(vi[0] == 0){
            right_shift_cnt -= vi[1];
        }
        else{
            right_shift_cnt += vi[1];
        }
    }
    int len = s.size();
    right_shift_cnt %= len;
    if(right_shift_cnt == 0) return s;
    else if(right_shift_cnt < 0) right_shift_cnt += len;
    string s1 = s.substr(len-right_shift_cnt, right_shift_cnt);
    string s2 = s.substr(0, len-right_shift_cnt);
    cout << s1 << ' ' << s2 << endl;
    return s1 + s2;
}

int main() {

    return 0;
}
