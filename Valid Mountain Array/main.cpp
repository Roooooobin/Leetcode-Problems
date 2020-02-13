#include <bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int>& A) {
    int n = A.size();
    if(n < 3 || A[1] <= A[0] || A[n-2] <= A[n-1]) return false;
    int i = 0;
    while(i < n-1 && A[i] < A[i+1]) i++;
    while(i < n-1 && A[i] > A[i+1]) i++;
    return i == n-1;
}

int main() {
    vector<int> A = {0, 1, 2, 1, 2};
    cout << validMountainArray(A) << endl;
    return 0;
}
