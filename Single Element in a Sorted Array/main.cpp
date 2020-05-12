#include <bits/stdc++.h>
using namespace std;

//int singleNonDuplicate(vector<int>& nums) {
//    int ret = 0;
//    for(auto num: nums){
//        ret ^= num;
//    }
//    return ret;
//}

//int solve(vector<int>& nums, int i, int j){
//    if(i > j) return 0;
//    if(i == j){
//        return nums[i];
//    }
//    return solve(nums, i, (i+j)/2) ^ solve(nums, (i+j)/2+1, j);
//}
//
//int singleNonDuplicate(vector<int>& nums) {
//    return solve(nums, 0, nums.size()-1);
//}

// leetcode-540 by Robin
int singleNonDuplicate(vector<int>& nums) {
    int l = 0, r = nums.size() - 1;
    while(l < r){
        int mid = l + (r - l) / 2;
        if(mid % 2 == 0){
            if(nums[mid] == nums[mid+1]){
                l = mid + 2;
            }
            else{
                r = mid;
            }
        }
        else{
            if(nums[mid] == nums[mid-1]){
                l = mid + 1;
            }
            else{
                r = mid;
            }
        }
    }
    return nums[l];
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 5, 4, 4, 8, 8};
    cout << singleNonDuplicate(nums) << endl;
    return 0;
}