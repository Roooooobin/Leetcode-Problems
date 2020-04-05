#include <bits/stdc++.h>
using namespace std;

// leetcode-327 by Robin
int countRangeSum(vector<int>& nums, int lower, int upper) {
    int n = nums.size();
    long sum = 0;
    multiset<long> sums;
    sums.insert(0);
    int cnt = 0;
    for(int i=0; i<n; ++i){
        sum += nums[i];
        cnt += distance(sums.lower_bound(sum-upper), sums.upper_bound(sum-lower));
        sums.insert(sum);
    }
    return cnt;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
