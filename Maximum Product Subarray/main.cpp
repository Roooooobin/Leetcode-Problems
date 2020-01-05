#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int pos_max = nums[0], neg_min = nums[0], ans = nums[0];
    for(int i=1; i<n; i++){
        int pre_pos_max = pos_max;
        int pre_neg_min = neg_min;
        //cout << pre_neg_min << ' ' << pre_pos_max << endl;
        pos_max = max(max(pre_pos_max*nums[i], pre_neg_min*nums[i]), nums[i]);
        neg_min = min(min(pre_pos_max*nums[i], pre_neg_min*nums[i]), nums[i]);
        if(ans < max(pos_max, neg_min)){
            ans = max(pos_max, neg_min);
        }
    }
    return ans;
}

int main()
{
    VI nums = {2, 3, -2, 4};
    cout << maxProduct(nums) << endl;
    return 0;
}
