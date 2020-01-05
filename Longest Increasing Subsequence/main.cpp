#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e4 + 23;
typedef long long LL;
typedef vector<int> VI;

//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        if(n == 0) return 0;
//        vector<int> dp(n, 1);
////        for(auto x: dp){
////            cout << x << endl;
////        }
//        for(int i=0; i<n-1; i++){
//            for(int j=i+1; j<n; j++){
//                if(nums[j] > nums[i]){
//                    dp[j] = max(dp[j], dp[i]+1);
//                }
//            }
//        }
//        int _max = dp[0];
//        for(auto x: dp){
//            _max = max(_max, x);
//        }
//        return _max;
//    }
//};

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int dp[10007];
        dp[0] = nums[0];
        int len = 0;
        for(int i=1; i<n; i++){
            if(nums[i] > dp[len]){
                dp[++len] = nums[i];
            }
            else{
                int pos = lower_bound(dp, dp+len, nums[i]) - dp;
                dp[pos] = nums[i];
            }
        }
        return len+1;
    }
};

int main()
{
    Solution s;
//    int a[] = {10, 9, 2, 5, 3, 7, 101, 18};
    int a[] = {2, 1, 4, 5, 3, 7};
    VI nums(a, a+6);
    cout << s.lengthOfLIS(nums) << endl;
    return 0;
}
