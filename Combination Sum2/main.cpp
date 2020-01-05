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
//    choose nums[i]
//    ret.push_back(nums[i]);
//    backtracing(ans, nums, target, i+1, sum+nums[i], ret);
//    do not choose nums[i]
//    ret.pop_back();
//    backtracing(ans, nums, target, i+1, sum, ret);
//}
//
//vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//    vector<vector<int>> ans;
//    vector<int> ret;
//    sort(candidates.begin(), candidates.end());
//    backtracing(ans, candidates, target, 0, 0, ret);
//    set<vector<int>> S(ans.begin(), ans.end());
//    vector<vector<int>> res(S.begin(), S.end());
//    return res;
//}

//void getSolve(vector<int>& candidates, vector<int>& help, vector<vector<int>>& result, int left, int target)
//	{
//		if (target == 0)
//		{
//			result.push_back(help);
//			return;
//		}
//		if (target < 0)
//			return;
//		int size = candidates.size();
//		for (int i = left + 1; i < size; i++)
//		{
//			if (i>left + 1)
//			{
//				if (candidates[i] == candidates[i - 1])
//					continue;
//			}
//			help.push_back(candidates[i]);
//			getSolve(candidates, help, result, i, target - candidates[i]);
//			help.pop_back();
//		}
//	}
//
//vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
//	{
//		vector<vector<int>> result;
//		vector<int> help;
//		sort(candidates.begin(), candidates.end());
//		getSolve(candidates, help, result, -1, target);
//		return result;
//	}

void backtracing(vector<vector<int>>& ans, vector<int>& nums, int target, int i, int sum, vector<int> ret)
{
    if(sum == target){
        ans.push_back(ret);
        return;
    }
    if(sum > target) return;
    if(i >= nums.size()) return;
    for(int k=i; k<nums.size(); k++){
        if(k > i){
            //avoid duplicate
            if(nums[k] == nums[k-1]) continue;
        }
        //choose nums[k]
        ret.push_back(nums[k]);
        backtracing(ans, nums, target, k+1, sum+nums[k], ret);
        //not choose nums[k]
        ret.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> ret;
    sort(candidates.begin(), candidates.end());
    backtracing(ans, candidates, target, 0, 0, ret);
    return ans;
}

int main()
{
    int a[7] = {10, 1, 2, 7, 6, 1, 5};
    VI b(a, a+7);
    //sort(b.begin(), b.end());
//    b.erase(--b.end(), b.end());
//    for(auto x: b){
//        cout << x << endl;
//    }
    vector< VI > ans;
    ans = combinationSum2(b, 8);

    for(auto vi: ans){
        for(auto x: vi){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
