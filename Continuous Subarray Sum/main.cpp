#include <bits/stdc++.h>
using namespace std;

// leetcode-523 by Robin
bool checkSubarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> hash;
    int n = nums.size();
    int sum = 0;
    hash[0] = -1;
    for(int i=0; i<n; ++i){
        sum += nums[i];
        if(k != 0){
            sum %= k;
        }
        if(hash.count(sum)){
            if(i - hash[sum] > 1) return true;
        }
        else{
            hash[sum] = i;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {23, 2, 6, 4, 7};
    cout << checkSubarraySum(nums, 6) << endl;
    cout << checkSubarraySum(vector<int>{0, 0}, 0) << endl;
    return 0;
}
