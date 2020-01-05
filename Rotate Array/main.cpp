#include <bits/stdc++.h>
using namespace std;

void reverse_(vector<int>& nums, int l, int r){
    while(l < r){
        int tmp = nums[r];
        nums[r] = nums[l];
        nums[l] = tmp;
        l++;
        r--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;
    reverse_(nums, 0, n-1-k);
    reverse_(nums, n-k, n-1);
    reverse_(nums, 0, n-1);
}

int main() {
//    vector<int> nums = {1,2,3,4,5,6,7};
    vector<int> nums = {-1};
    rotate(nums, 2);
    for(int x: nums){
        cout << x << ' ';
    }
    return 0;
}