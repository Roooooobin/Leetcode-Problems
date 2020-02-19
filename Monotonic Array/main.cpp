#include <bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int>& A) {
    int n = A.size();
    if(n == 1) return true;
    int i = 1;
    while(i < n && A[i] == A[i-1]) i++;
    if(i == n) return true;
    int sign = A[i] - A[i-1];
    for(; i<n; i++){
        if((A[i] - A[i-1]) * sign < 0) return false;
    }
    return true;
}

bool isMonotonic(vector<int>& A){
    bool increasing = true;
    bool decreasing = true;
    for(int i=0; i<A.size()-1; i++){
        if(A[i] > A[i+1]){
            increasing = false;
        }
        if(A[i] < A[i+1]){
            decreasing = false;
        }
    }
    return increasing || decreasing;
}

int main() {
    vector<int> A = {1, 1, 1};
    cout << isMonotonic(A) << endl;
    return 0;
}
