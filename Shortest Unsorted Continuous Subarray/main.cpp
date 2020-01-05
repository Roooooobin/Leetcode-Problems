#include <bits/stdc++.h>
using namespace std;

int findUnsortedSubarray(vector<int>& nums) {
    int n = nums.size();
    vector<int> nums_sorted(nums.begin(), nums.end());
    sort(nums_sorted.begin(), nums_sorted.end());
    int i, j;
    for(i=0; i<n && nums[i]==nums_sorted[i]; i++);
    for(j=n-1; j>i && nums[j] == nums_sorted[j]; j--);
    return j-i+1;
}

int main() {
    vector<int> nums = {7, 6, 4, 8, 10, 9, 15};
    cout << findUnsortedSubarray(nums) << endl;
    return 0;
}