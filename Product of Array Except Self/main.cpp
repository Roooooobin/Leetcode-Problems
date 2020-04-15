#include <bits/stdc++.h>
using namespace std;

// leetcode-238 by Robin
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    int left_pro = 1, right_pro = 1;
    vector<int> ans(n, 1);
    for(int i = 0, j = n-1; i<n; i++, j--){
        ans[i] *= left_pro;
        ans[j] *= right_pro;
        left_pro *= nums[i];
        right_pro *= nums[j];
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
