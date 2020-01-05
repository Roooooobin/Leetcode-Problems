#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//int minSubArrayLen(int s, vector<int>& nums) {
//    if(nums.size() == 0) return 0;
//    int l = 0, r = 0;
//    int sum = 0;
//    int min_len = nums.size()+1;
//    while(r < nums.size()){
//        cout << sum << endl;
//        if(sum > s){
//            sum -= nums[l++];
//        }
//        if(sum < s){
//            sum += nums[r++];
//        }
//        if(sum >= s){
//            min_len = min(min_len, r-l);
//            if(sum == s){
//                if(r == nums.size()) break;
//                sum += nums[r++];
//            }
//        }
//    }
//    while(sum > s && l < nums.size()){
//        sum -= nums[l++];
//        if(sum >= s){
//            min_len = min(min_len, r-l);
//        }
//    }
//    if(min_len == nums.size()+1) min_len = 0;
//    return min_len;
//}

int minSubArrayLen(int s, vector<int>& nums) {
    if(nums.size() == 0) return 0;
    int l = 0, r = 0;
    int sum = 0;
    int min_len = nums.size()+1;
    for(int r=0; r<nums.size(); r++){
        sum += nums[r];
        while(sum >= s){
            min_len = min(min_len, r-l+1);
            sum -= nums[l++];
        }
    }
    if(min_len == nums.size()+1) min_len = 0;
    return min_len;
}

int main()
{
    VI nums = {1, 2, 3, 4, 5};
    VI nums1 = {2, 3, 1, 2, 4, 3};
    cout << minSubArrayLen(7, nums1) << endl;
    return 0;
}
