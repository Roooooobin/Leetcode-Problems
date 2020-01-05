#include <bits/stdc++.h>
using namespace std;

int findLengthOfLCIS(vector<int>& nums) {
    int n = nums.size();
    if(n <= 1) return n;
    int max_ = -1;
    int len = 1;
    for(int i=1; i<n; i++){
        if(nums[i] > nums[i-1]){
            len++;
        }
        else{
            len = 1;
        }
        max_ = max(max_, len);
    }
    return max_;
}

int main() {
    vector<int> nums = {};
    cout << findLengthOfLCIS(nums) << endl;
    return 0;
}