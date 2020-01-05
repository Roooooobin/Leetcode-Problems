#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

double findMaxAverage(vector<int>& nums, int k) {
    double _max = 0;
    for(int i=0; i<k; i++){
        _max += nums[i];
    }
    _max /= k;
    double ans = _max;
    for(int i=1; i<=nums.size()-k; i++){
        _max += 1.0 * (nums[i+k-1] - nums[i-1]) / k;
        ans = max(_max, ans);
    }
    return ans;
}

int main()
{
    VI a = {1, 12, -5, -6, 50, 3};
    cout << findMaxAverage(a, 4) << endl;
    return 0;
}
