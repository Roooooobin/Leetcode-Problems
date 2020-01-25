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

int main() {
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    vector<int> ans = singleNumber(nums);
    for(auto x: ans){
        cout << x << ' ';
    }
    return 0;
}
