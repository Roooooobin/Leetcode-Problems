#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
    int n = nums.size();
    if(n == 1) return nums[0];
    int l = 0, r = n-1;
    while(l < r){
        int mid = l + (r - l) / 2;
        if(nums[mid] > nums[r]){
            l = mid + 1;
        }
        else if(nums[mid] < nums[r]){
            r = mid;
        }
        else r--;
    }
    return nums[l];
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
