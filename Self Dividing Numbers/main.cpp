#include <bits/stdc++.h>
using namespace std;

vector<int> selfDividingNumbers(int left, int right) {
    vector<int> ans;
    for(; left<=right; left++){
        int x = left;
        while(x){
            if((x % 10) == 0 || left % (x % 10) != 0) break;
            x /= 10;
        }
        if(x == 0) ans.push_back(left);
    }
    return ans;
}

int main() {
    vector<int> ans = selfDividingNumbers(1, 220);
    for(auto x: ans){
        cout << x << ' ';
    }
    return 0;
}
