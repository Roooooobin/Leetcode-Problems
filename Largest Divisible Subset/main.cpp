#include <bits/stdc++.h>
using namespace std;

vector<int> largestDivisibleSubset(vector<int>& nums) {
    if(nums.empty()){
        return vector<int>{};
    }
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> dp(n, 1);
    map<int, vector<int> > value2subset;
    int max_ = -1;
    int max_idx = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(nums[i] % nums[j] == 0){
                if(dp[i] < dp[j]+1){
                    dp[i] = dp[j] + 1;
                    if(value2subset[j].empty()){
                        value2subset[j].push_back(nums[j]);
                    }
                    value2subset[i] = value2subset[j];
                    value2subset[i].push_back(nums[i]);
                }
                if(max_ < dp[i]){
                    max_ = dp[i];
                    max_idx = i;
                }
            }
        }
    }
    return max_idx? value2subset[max_idx]: vector<int>{nums[0]};
}

// use a parent vector to iterate through subsets is much more memory-efficient
vector<int> largestDivisibleSubset(vector<int>& nums){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int> dp(n, 0);
    vector<int> parent(n, 0);
    int max_ = 0;
    int max_idx = 0;
    for(int i=n-1; i>=0; --i){
        for(int j=i; j<n; ++j){
            if(nums[j] % nums[i] == 0 && dp[i] < dp[j] + 1){
                dp[i] = dp[j] + 1;
                parent[i] = j;
                if(dp[i] > max_){
                    max_ = dp[i];
                    max_idx = i;
                }
            }
        }
    }

    vector<int> ans;
    for(int i=0; i<max_; ++i){
        ans.push_back(nums[max_idx]);
        max_idx = parent[max_idx];
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 8, 9, 16, 27, 32};
    vector<int> ans = largestDivisibleSubset(nums);
    for(auto x: ans){
        cout << x << ' ';
    }
    return 0;
}
