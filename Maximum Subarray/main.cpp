#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int maxSubArray(vector<int>& nums) {
    int ans = nums[0];
    int _max = nums[0];
    for(int i=1; i<nums.size(); i++){
        _max += nums[i];
        if(nums[i] > _max) _max = nums[i];
        else if(_max < 0) {_max = 0; continue;}
        ans = max(ans, _max);
    }
    return ans;
}

int main()
{
    VI a = {-1, -2, -3};
    VI b = {-2,1,-3,4,-1,2,1,-5,4};
    VI c = {1, 2};
    cout << maxSubArray(c) << endl;
    return 0;
}
