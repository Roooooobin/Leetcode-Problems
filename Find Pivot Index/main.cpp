#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    int sum_total = 0;
    for(int i=0; i<n; i++){
        sum_total += nums[i];
    }
    int idx = 0;
    int sum_left = 0;
    for(idx; idx<n; idx++){
        if(sum_left == sum_total - sum_left - nums[idx]){
            return idx;
        }
        sum_left += nums[idx];
    }
    return -1;
}

int main() {
    vector<int> nums = {1, -1, 1};
    cout << pivotIndex(nums) << endl;
    return 0;
}
