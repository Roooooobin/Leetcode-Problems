#include <bits/stdc++.h>
using namespace std;

int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
    vector<int> AB_sum;
    int n = A.size();
    for(int x: A){
        for(int y: B){
            AB_sum.push_back(x+y);
        }
    }
    vector<int> CD_sum;
    for(int x: C){
        for(int y: D){
            CD_sum.push_back(x+y);
        }
    }
    sort(CD_sum.begin(), CD_sum.end());
    int count4Sum = 0;
    for(int x: AB_sum){
        count4Sum += upper_bound(CD_sum.begin(), CD_sum.end(), -x) - lower_bound(CD_sum.begin(), CD_sum.end(), -x);
    }
    return count4Sum;
}

int main() {
    vector<int> A = {1, 2, 3, 4, 4, 4};
    cout << upper_bound(A.begin(), A.end(), 5) - lower_bound(A.begin(), A.end(), 5);
    return 0;
}
