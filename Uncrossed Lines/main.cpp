#include <bits/stdc++.h>
using namespace std;

// leetcode-1035 inspired by lee215
int maxUncrossedLines(vector<int>& A, vector<int>& B) {
    int n = A.size(), m = B.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=m; ++j) {
            dp[i][j] = A[i-1] == B[j-1]? dp[i-1][j-1]+1: max(dp[i][j-1], dp[i-1][j]);
        }
    }
    return dp[n][m];
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
