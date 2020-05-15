#include <bits/stdc++.h>
using namespace std;

// leetcode-918 by Robin inspired by @lee215
int maxSubarraySumCircular(vector<int>& A) {
    // 1. middle part max subarray sum as leetcode-53
    // 2. one part of head and one part of tail, maximum subarray sum = total sum - minimun subarray sum
    // corner case: all numbers are negative, return maximum subarray
    int curMin = 0, sumMin = INT_MAX;
    int curMax = 0, sumMax = INT_MIN;
    int totalSum = 0;
    for (int x: A) {
        curMin = min(x, curMin + x);
        sumMin = min(sumMin, curMin);
        curMax = max(x, curMax + x);
        sumMax = max(sumMax, curMax);
        totalSum += x;
    }
    return sumMax > 0? max(sumMax, totalSum - sumMin): sumMax;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
