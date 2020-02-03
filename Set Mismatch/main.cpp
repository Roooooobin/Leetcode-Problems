#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        if(nums[abs(nums[i])-1] < 0){
            ans.push_back(abs(nums[i]));
        }
        else{
            nums[abs(nums[i])-1] *= -1;
        }
    }
    for(int i=0; i<nums.size(); i++){
        if(nums[i] > 0){
            ans.push_back(i+1);
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 3, 1, 3, 5};
    vector<int> ans = findErrorNums(nums);
    for(auto x: ans){
        cout << x << ' ';
    }

    return 0;
}
