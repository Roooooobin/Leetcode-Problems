#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& A) {
    for(int i=0; i<A.size(); i++){
        A[i] *= A[i];
    }
    sort(A.begin(), A.end());
    return A;
}

int main() {
    vector<int> A = {-7, -3, 2, 3, 11};
    vector<int> B = sortedSquares(A);
    for(auto x: B){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
