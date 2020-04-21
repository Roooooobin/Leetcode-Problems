#include <bits/stdc++.h>
using namespace std;

// leetcode-1248 by Robin
int numberOfSubarrays(vector<int>& nums, int k) {
    vector<int> odds_position;
    odds_position.push_back(-1);
    int n = nums.size();
    for(int i=0; i<n; ++i){
        if(nums[i] & 1){
            odds_position.push_back(i);
        }
    }
    odds_position.push_back(n);
    int cnt = 0;
    int i = 1, j = k;
    while(j < odds_position.size() - 1){
        cnt += (odds_position[i] - odds_position[i-1]) * ((odds_position[j+1] - odds_position[j]));
        ++i;
        ++j;
    }
    return cnt;
}

int main() {
    vector<int> nums = {1, 1, 2, 1, 1};
    cout << numberOfSubarrays(nums, 2) << endl;
    return 0;
}
