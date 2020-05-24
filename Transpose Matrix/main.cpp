#include <bits/stdc++.h>
using namespace std;

// leetcode-867 by Robin
vector<vector<int>> transpose(vector<vector<int>>& A) {
    vector<vector<int>> ans(A[0].size(), vector<int>(A.size()));
    for (int i=0; i<A.size(); ++i) {
        for (int j=0; j<A[0].size(); ++j) {
            ans[j][i] = A[i][j];
        }
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
