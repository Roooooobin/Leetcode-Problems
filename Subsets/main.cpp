#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

vector<int> calc_subset(vector<int>& nums, int k)
{
    int n = nums.size();
    vector<int> ret;
    for(int i=0; i<n; i++){
        if((1<<i) & k){
            ret.push_back(nums[i]);
        }
    }
    return ret;
}

vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    vector< vector<int> > ans;
    for(int i=0; i<(1<<n); i++){
        ans.push_back(calc_subset(nums, i));
    }
    return ans;
}

int main()
{
    int a[5] = {1, 2, 2, 3};
    VI vi(a, a+4);
    vector< VI > ans = subsets(vi);
    for(auto v: ans){
        for(auto x: v){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
