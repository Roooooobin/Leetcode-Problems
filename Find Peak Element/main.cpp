#include <bits/stdc++.h>
using namespace std;

// leetcode-162 by Robin
int findPeakElement(vector<int>& nums) {
    int n = nums.size();
    int l = 0, r = n-1;
    while(l < r){
        int mid = l + (r - l) / 2;
        if(nums[mid] > nums[mid+1]){
            r = mid;
        }
        else l = mid + 1;
    }
    return l;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
