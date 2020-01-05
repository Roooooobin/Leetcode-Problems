#include <bits/stdc++.h>
using namespace std;

//int removeDuplicates(vector<int>& nums) {
//    if(nums.size() <= 1) return nums.size();
//    int n = nums.size();
//    int p1 = 0, p2 = 1;
//    int cnt = 0;
//    while(p1 < n && p2 < n){
//        if(nums[p1] != nums[p2]){
//            cnt++;
//            p1 = p2;
//            p2++;
//            if(p2 == n) cnt++;
//        }
//        else{
//            cnt += 2;
//            p2++;
//            while(p2 < n && nums[p2] == nums[p1]){
//                nums[p2] *= -1;
//                p2++;
//            }
//            if(p2 == n) break;
//            p1 = p2;
//            p2++;
//            if(p2 == n) cnt++;
//        }
//    }
////    for(auto x: nums){
////        cout << x << " ";
////    }
////    cout << endl;
//    p1 = 1;
//    p2 = 2;
//    while(p1 < n && p2 < n){
//        if(nums[p1] < 0){
//            while(p2 < n && nums[p2] < 0) p2++;
//            if(p2 == n) break;
//            nums[p1] = nums[p2];
//            nums[p2] *= -1;
//            p1++;
//            p2++;
//        }
//        else{
//            p1++;
//            p2++;
//        }
//    }
////    for(auto x: nums){
////        cout << x << " ";
////    }
//    return cnt;
//}

int removeDuplicates(vector<int>& nums){
    int i = 0;
    for(int x: nums){
        if(i < 2 || x > nums[i-2]){
            nums[i++] = x;
        }
    }
    return i;
}

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4};
//    vector<int> nums = {1, 2, 3, 4, 5};
    cout << removeDuplicates(nums) << endl;
    return 0;
}