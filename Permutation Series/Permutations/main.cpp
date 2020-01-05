#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

void dfs(vector<int>& nums, vector<vector<int>>& ans, int l)
{
    if(l == nums.size()-1){
        ans.push_back(nums);
    }
    for(int i=l; i<nums.size(); i++){
        sort(nums.begin()+l, nums.end());
        swap(nums[l], nums[i]);
        dfs(nums, ans, l+1);
        swap(nums[l], nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    dfs(nums, ans, 0);
    return ans;
}

int main()
{
    int a[3] = {1, 1, 3};
    vector<int> vi(a, a+3);
    vector<vector<int>> res = permute(vi);
    for(auto vi: res){
        for(auto x: vi){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
