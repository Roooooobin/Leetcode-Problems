#include <bits/stdc++.h>
using namespace std;

vector<int> GetPowerFactor(int R, int N) {
    vector<int> ans;
    if(N == 1 && R != 1){
        return vector<int>{};
    }
    else if(R == 1){
        return vector<int>{0};
    }
    int max_ = 0;
    int tmp = R;
    while(tmp>1){
        max_++;
        tmp /= N;
    }
    cout << max_ << endl;
    return ans;
}

int main() {
    vector<int> ans = GetPowerFactor(33, 3);

    return 0;
}
