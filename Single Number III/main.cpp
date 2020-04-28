#include <bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    map<int, int> table;
    for(int i=0; i<nums.size(); i++){
        table[nums[i]]++;
    }
    vector<int> ans;
    for(map<int, int>::iterator ite = table.begin(); ite != table.end(); ite++){
        if(ite->second == 1) ans.push_back(ite->first);
    }
    return ans;
}

vector<int> singleNumber(vector<int>& nums) {
    int res = 0;    // to store a ^ b
    for(int x: nums){
        res ^= x;
    }
    int div = 1;
    while((div & res) == 0){
        div <<= 1;
    }
    int a = 0, b = 0;
    for(int x: nums){
        if(div & x){
            a ^= x;
        }
        else{
            b ^= x;
        }
    }
    return vector<int>{a, b};
}

int main() {
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    vector<int> ans = singleNumber(nums);
    for(auto x: ans){
        cout << x << ' ';
    }
    return 0;
}
