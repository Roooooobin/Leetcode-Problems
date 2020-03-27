#include <bits/stdc++.h>
using namespace std;

class NumArray {
private:
    int* dp;

public:
    NumArray(vector<int>& nums) {
        dp = new int[nums.size()+1];
        for(int i=0; i<nums.size(); ++i){
            dp[i+1] = dp[i] + nums[i];
        }
    }

    int sumRange(int i, int j) {
        return dp[j+1] - dp[i];
    }
};

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray* obj = new NumArray(nums);
    cout << obj->sumRange(0, 3) << endl;
    cout << obj->sumRange(0, 2) << endl;
    cout << obj->sumRange(1, 4) << endl;
    return 0;
}
