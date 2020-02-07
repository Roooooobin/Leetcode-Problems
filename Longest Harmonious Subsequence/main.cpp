#include <bits/stdc++.h>
using namespace std;

int findLHS(vector<int>& nums) {
    map<int, short> table;
    for(auto& x: nums){
        table[x]++;
    }
    int max_ = 0;
    for(auto ite=table.begin(); ite!=table.end(); ite++){
        if(table.count(ite->first+1)){
            max_ = max(max_, table[ite->first] + table[ite->first+1]);
        }
    }
    return max_;
}

// TLE
//int findLHS(vector<int>& nums){
//    int max_ = 0;
//    bool flag = false;
//    for(int i=0; i<nums.size(); i++){
//        int cnt = 0;
//        for(int j=0; j<nums.size(); j++){
//            if(nums[j] == nums[i]){
//                cnt++;
//            }
//            else if(nums[j] == nums[i]+1){
//                cnt++;
//                flag = true;
//            }
//        }
//        if(flag){
//            max_ = max(max_, cnt);
//        }
//    }
//    return max_;
//}

int main() {
    vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    int ans = findLHS(nums);
    cout << ans << endl;
    return 0;
}
