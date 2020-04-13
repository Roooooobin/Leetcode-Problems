#include <bits/stdc++.h>
using namespace std;

// leetcode-525 by Robin
int findMaxLength(vector<int>& nums) {
    int n = nums.size();
    if(n == 1) return 0;
    unordered_map<int, int> hash;
    int diff = 0;
    int max_ = 0;
    hash[0] = -1;
    for(int i=0; i<n; ++i){
        if(nums[i] == 0){
            diff--;
        }
        else{
            diff++;
        }
        if(hash.count(diff)){
            hash[diff] = min(hash[diff], i);
            max_ = max(i-hash[diff], max_);
        }
        else{
            hash[diff] = i;
        }
    }
//    for(int i=-5; i<5; i++){
//        cout << i << ' ' << hash[i] << endl;
//    }
    return max_;
}

int main() {
//    vector<int> nums = {0, 0, 1, 0, 0, 0, 1, 1};
    vector<int> nums = {0, 1};
    cout << findMaxLength(nums) << endl;
    return 0;
}
