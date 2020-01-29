#include <bits/stdc++.h>
using namespace std;

void backtracing(vector<vector<int>>& ans, vector<int>& nums, int target, int k, int i, int sum, int cnt, vector<int> ret)
{
    if(sum == target && cnt == k){
        ans.push_back(ret);
        return;
    }
    if(cnt >= k) return;
    if(sum > target) return;
    if(i > nums.size()) return;
    for(int m=i; m < nums.size(); m++){
        if(m > i){
            //avoid duplicate
            if(nums[m] == nums[m - 1]) continue;
        }
        //choose nums[m]
        ret.push_back(nums[m]);
        backtracing(ans, nums, target, k, m + 1, sum + nums[m], cnt+1, ret);
        //not choose nums[m]
        ret.pop_back();
    }
}

vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> ans;
    vector<int> ret;
    vector<int> candidates = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    backtracing(ans, candidates, n, k, 0, 0, 0, ret);
    return ans;
}

int main() {
    vector<vector<int>> ans = combinationSum3(4, 25);
    for(auto vi: ans){
        for(auto x: vi){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
