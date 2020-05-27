#include <bits/stdc++.h>
using namespace std;

// leetcode-974 by Robin
int subarraysDivByK(vector<int>& A, int K) {
    int n = A.size();
    vector<int> sumCount(K, 0);
    vector<int> prefixSum(n);
    prefixSum[0] = A[0];
    for (int i=1; i<n; ++i) {
        prefixSum[i] = prefixSum[i-1] + A[i];
    }
    sumCount[0] = 1;
    for (int x: prefixSum) {
        sumCount[(x % K + K) % K]++;
    }
    int ans = 0;
    for (int x: sumCount) {
        ans += x * (x - 1) / 2;
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
