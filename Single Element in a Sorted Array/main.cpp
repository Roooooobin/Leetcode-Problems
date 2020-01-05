#include <bits/stdc++.h>
using namespace std;

//int singleNonDuplicate(vector<int>& nums) {
//    int ret = 0;
//    for(auto num: nums){
//        ret ^= num;
//    }
//    return ret;
//}

int solve(vector<int>& nums, int i, int j){
    if(i > j) return 0;
    if(i == j){
        return nums[i];
    }
    return solve(nums, i, (i+j)/2) ^ solve(nums, (i+j)/2+1, j);
}

int singleNonDuplicate(vector<int>& nums) {
    return solve(nums, 0, nums.size()-1);
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 5, 4, 4, 8, 8};
    cout << singleNonDuplicate(nums) << endl;
    return 0;
}