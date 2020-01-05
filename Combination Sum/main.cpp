#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//void backtracing(vector<vector<int>>& ans, vector<int>& nums, int target, int i, int sum, vector<int> ret)
//{
//    if(sum == target){
//        ans.push_back(ret);
//        return;
//    }
//    if(sum > target) return;
//    if(i >= nums.size()) return;
//    //choose nums[i]
//    ret.push_back(nums[i]);
//    backtracing(ans, nums, target, i, sum+nums[i], ret);
//    //do not choose nums[i]
//    ret.pop_back();
//    backtracing(ans, nums, target, i+1, sum, ret);
//}
//
//vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//    vector<vector<int>> ans;
//    vector<int> ret;
//    backtracing(ans, candidates, target, 0, 0, ret);
//    return ans;
//}

void backtracing(vector<vector<int>>& ans, vector<int>& nums, int target, int i, int sum, vector<int> ret)
{
    if(sum == target){
        ans.push_back(ret);
        return;
    }
    if(sum > target) return;
    if(i >= nums.size()) return;
    for(int k=i; k<nums.size(); k++){
        //choose nums[i]
        ret.push_back(nums[k]);
        backtracing(ans, nums, target, k, sum+nums[k], ret);
        //not choose nums[i]
        ret.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> ret;
    backtracing(ans, candidates, target, 0, 0, ret);
    return ans;
}

int main()
{
    int a[4] = {2, 3, 6, 7};
    VI b(a, a+4);
//    b.erase(--b.end(), b.end());
//    for(auto x: b){
//        cout << x << endl;
//    }
    vector< VI > ans;
    ans = combinationSum(b, 7);
    for(auto vi: ans){
        for(auto x: vi){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
