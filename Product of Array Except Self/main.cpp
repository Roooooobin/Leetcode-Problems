#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//vector<int> productExceptSelf(vector<int>& nums) {
//    vector<int> ans(nums.size(), 1);
//    int leftPro = 1;
//    int rightPro = 1;
//    for(int i=0; i<nums.size(); i++){
//        ans[i] *= leftPro;
//        leftPro *= nums[i];
//    }
//    for(int i=nums.size()-1; i>=0; i--){
//        ans[i] *= rightPro;
//        rightPro *= nums[i];
//    }
//    return ans;
//}

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans(nums.size(), 1);
    int leftPro = 1;
    int rightPro = 1;
    int n = nums.size();
    int j = n-1;
    for(int i=0; i<nums.size(); i++){
        j = n-i-1;
        ans[i] *= leftPro;
        ans[j] *= rightPro;
        leftPro *= nums[i];
        rightPro *= nums[j];
    }
    return ans;
}


int main()
{
    VI nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    VI ans = productExceptSelf(nums);
    for(auto x: ans){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
