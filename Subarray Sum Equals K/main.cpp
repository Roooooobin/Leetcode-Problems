#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//int subarraySum(vector<int>& nums, int k) {
//    int n = nums.size();
//    if(n == 0) return 0;
//    vector<int> sum(n+1, 0);
//    sum[0] = 0;
//    for(int i=0; i<n; i++){
//        sum[i+1] = sum[i] + nums[i];
//    }
////    for(int i=0; i<n+1; i++){
////        cout << sum[i] << endl;
////    }
//    int cnt = 0;
//    for(int i=0; i<n+1; i++){
//        for(int j=i+1; j<n+1; j++){
//            if(sum[j] - sum[i] == k){
//                cnt++;
//            }
//        }
//    }
//    return cnt;
//}

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    if(n == 0) return 0;
    int sum = 0;
    unordered_map<int, int> MAP;
    MAP[0] = 1;
    int cnt = 0;
    for(int i=0; i<n; i++){
        sum += nums[i];
        if(MAP.count(sum-k)){
            cnt += MAP[sum-k];
        }
        if(MAP.count(sum) == 0){
            MAP[sum] = 1;
        }
        else{
            MAP[sum]++;
        }
    }
    return cnt;
}

int main()
{
    VI nums1 = {1, 2, 1, 3, 4, 2, 1, 1, 1};
    VI nums = {2, 3, -1, -1};
    VI nums2 = {1, 2, 3};
    VI nums3 = {1};
    cout << subarraySum(nums, 3) << endl;
    return 0;
}
