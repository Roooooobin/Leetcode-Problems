#include <bits/stdc++.h>
using namespace std;

// leetcode-670 by Robin
int maximumSwap(int num) {
    int x = num;
    vector<int> nums;
    while (x) {
        int y = x % 10;
        nums.push_back(y);
        x /= 10;
    }
    int n = nums.size();
    for (int i=n-1; i>=1; --i) {
        int largestIdx = i;
        int largest = nums[i];
        for (int j=0; j<i; ++j) {
            if (largest < nums[j]) {
                largest = nums[j];
                largestIdx = j;
            }
        }
        if (largestIdx != i) {
            swap(nums[i], nums[largestIdx]);
            break;
        }
    }
    int ans = 0;
    for (int i=n-1; i>=0; --i) {
        ans = ans * 10 + nums[i];
    }
    return ans;
}

int main() {
    cout << maximumSwap(9637) << endl;
    return 0;
}
