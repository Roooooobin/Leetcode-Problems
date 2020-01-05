#include <bits/stdc++.h>
using namespace std;

//int triangleNumber(vector<int>& nums) {
//    int n = nums.size();
//    if(n <= 2) return 0;
//    int cnt = 0;
//    for(int i=0; i<n-2; i++){
//        for(int j=i+1; j<n-1; j++){
//            for(int k=j+1; k<n; k++){
//                if(nums[i]+nums[j]>nums[k] && nums[i]+nums[k]>nums[j] && nums[j]+nums[k]>nums[i]){
//                    cnt++;
//                }
//            }
//        }
//    }
//    return cnt;
//}

int main() {
    vector<int> nums = {2, 2, 3, 4};
    cout << triangleNumber(nums) << endl;
    return 0;
}