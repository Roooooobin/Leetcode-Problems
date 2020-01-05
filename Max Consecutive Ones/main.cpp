#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int max_ = -1;
    int cnt = 0;
    for(int i=0; i<n; i++){
        cnt = (cnt + nums[i]) * nums[i];
        max_ = max(max_, cnt);
    }
    return max_;
}

int main() {
    return 0;
}