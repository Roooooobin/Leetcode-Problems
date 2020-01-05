#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int p0 = 0, p1 = 0;
    int n = nums.size();
    while(p0 < n && p1 < n){
        while(p0 < n && nums[p0]){
            p0++;
        }
        if(p0 < n){
            p1 = p0 + 1;
            while(p1 < n && !nums[p1]){
                p1++;
            }
            if(p1 >= n) break;
            swap(nums[p0], nums[p1]);
            p0++;
            p1++;
        }
        else{
            break;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 0, 12, 13};
//    vector<int> nums = {1, 0};
//    vector<int> nums = {};
    moveZeroes(nums);
    for(auto x: nums){
        cout << x << ' ';
    }
    return 0;
}