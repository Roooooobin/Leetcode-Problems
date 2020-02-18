#include <bits/stdc++.h>
using namespace std;

bool increasingTriplet(vector<int>& nums) {
    int n = nums.size();
    if(n <= 2) return false;
    int candidate1 = INT_MAX, candidate2 = INT_MAX;
    for(int x: nums){
        if(x <= candidate1){
            candidate1 = x;
        }
        else if(x <= candidate2){
            candidate2 = x;
        }
        else{
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1, 1, 1, 1};
    cout << increasingTriplet(nums) << endl;
    return 0;
}
