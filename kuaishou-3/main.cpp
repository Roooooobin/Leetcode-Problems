#include <bits/stdc++.h>
using namespace std;

vector<int> WaitInLine(vector<int>& a, vector<int>& b) {
    int n = a.size();
    vector<int> seq(n, 0);
    vector<int> ans;
    int min_ = INT_MAX;
    for(int i=0; i<n; ++i){
        seq[i] = i+1;
    }
    do{
        int cur = 0;
        for(int i=1; i<=n; ++i){
            cur += (a[seq[i-1]-1] * (i-1) + b[seq[i-1]-1] * (n-i));
        }
        if(cur < min_){
            ans = vector<int>(seq.begin(), seq.end());
            min_ = cur;
        }
    }while(next_permutation(seq.begin(), seq.end()));
    return ans;
}

int main() {
    vector<int> a = {8, 9, 7};
    vector<int> b = {5, 8, 3};
    vector<int> ans = WaitInLine(a, b);
    for(int x: ans){
        cout << x << ' ';
    }
    return 0;
}
