#include <bits/stdc++.h>
using namespace std;

int maxSumDivThree(vector<int>& nums) {
    /*
        dp[i] means the current max sum that sum % 3 == i
    */
    vector<int> dp = {0, 0, 0}, dp2;
    for(int x: nums){
        dp2 = dp;
        for(int i: dp2){
            dp[(i+x) % 3] = max(dp[(i+x) % 3], i+x);
        }
    }
    return dp[0];
}

int main() {
    vector<int> nums = {4, 4};
    cout << maxSumDivThree(nums) << endl;
    return 0;
}
