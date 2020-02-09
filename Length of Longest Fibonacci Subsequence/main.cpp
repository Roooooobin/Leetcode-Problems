#include <bits/stdc++.h>
using namespace std;

int lenLongestFibSubseq(vector<int>& A) {
    int max_ = -1;
    int n = A.size();
    set<int> table;
    for(int i=0; i<n; i++){
        table.insert(A[i]);
    }
    int cnt;
    int idx = 0;
    int x, y;
    while(idx < n-1){
        for(int j=idx+1; j<n; j++){
            cnt = 2;
            x = A[idx];
            y = A[j];
            while(table.count(x+y)){
                y = x + y;
                x = y - x;
                cnt++;
            }
            max_ = max(max_, cnt);
        }
        idx++;
    }
    return max_ >= 3? max_: 0;
}

int lenLongestFibSubseq(vector<int>& A) {
    int n = A.size();
    unordered_map<int, int> index;
    for(int i=0; i<n; ++i){
        index[A[i]] = i;
    }
    unordered_map<int, int> longest;
    int ans = 0;
    for (int k = 0; k < n; ++k)
        for (int j = 0; j < k; ++j) {
            if (A[k] - A[j] < A[j] && index.count(A[k] - A[j])) {
                int i = index[A[k]-A[j]];
                longest[j*n + k] = longest[i*n + j] + 1;
                ans = max(ans, longest[j*n + k] + 2);
            }
        }
    return ans >= 3? ans: 0;
}

int main() {
    vector<int> A = {2,4,7,8,9,10,14,15,18,23,32,50};
    cout << lenLongestFibSubseq(A) << endl;
    return 0;
}
