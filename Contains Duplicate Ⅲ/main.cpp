#include <bits/stdc++.h>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
    map<int, int> mii;
    for(int i=0; i<nums.size(); i++){
        if(mii.count(nums[i])){
            if(i - mii[nums[i]] <= k) return true;
        }
        for(int j=-t; j<=t; j++){

        }
        mii[nums[i]] = i;
    }
    return false;
}

int main() {
//    vector<int> vi = {1, 2, 3, 1, 2, 3};
//    cout << containsNearbyDuplicate(vi, 3) << endl;
    int i = 3;
    cout << -i << endl;
    return 0;
}