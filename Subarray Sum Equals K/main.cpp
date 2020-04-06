#include <bits/stdc++.h>
using namespace std;

// leetcode-560 by Robin
int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_map<int, int> MAP;
    MAP[0] = 1;
    int sum = 0;
    int ans = 0;
    for(int x: nums){
        sum += x;
        if(MAP.count(sum - k)){
            ans += MAP[sum-k];
        }
        if(MAP.count(sum)){
            MAP[sum]++;
        }
        else{
            MAP[sum] = 1;
        }
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
