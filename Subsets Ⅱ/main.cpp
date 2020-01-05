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

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    set< vector<int> > tmp;
    for(int i=0; i<(1<<n); i++){
        tmp.insert(calc_subset(nums, i));
    }
    vector< vector<int> > ans(tmp.begin(), tmp.end());
    return ans;
}

int main()
{
    int a[5] = {4, 4, 4, 1, 4};
    VI vi(a, a+5);
    vector< VI > ans = subsetsWithDup(vi);
    for(auto v: ans){
        for(auto x: v){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
