#include <bits/stdc++.h>
using namespace std;

void backtracking(vector<vector<int>> & ans, vector<int> & ret, vector<int> & nums, int i){
    if(ret.size() >= 2) ans.push_back(ret);
    unordered_set<int> table;
    for(int j=i; j<nums.size(); j++){
        if((ret.empty() || nums[j] >= ret.back()) && table.find(nums[j]) == table.end()){
            ret.push_back(nums[j]);
            backtracking(ans, ret, nums, j + 1);
            ret.pop_back();
            table.insert(nums[j]);
        }
    }
}

vector<vector<int>> findSubsequences(vector<int>& nums) {
    vector<vector<int> > ans;
    vector<int> ret;
    backtracking(ans, ret, nums, 0);
    return ans;
}

int main() {
    vector<int> nums = {4, 6, 7, 7};
    vector<vector<int> > ans = findSubsequences(nums);
    for(auto vi: ans){
        for(auto x: vi){
            cout << x << ' ';
        }
        cout << endl;
    }
}
