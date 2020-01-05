#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int threeSumClosest(vector<int>& nums, int target) {
    if(nums.size() < 3) return 0;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int closest_sum = nums[0] + nums[1] + nums[2];
    for(int k=0; k<n-2; k++){
        int l = k+1;
        int r = n-1;
        while(l < r){
            int sum = nums[k] + nums[l] + nums[r];
            if(abs(sum-target) < abs(closest_sum-target)){
                closest_sum = sum;
            }
            if(sum > target){
                r--;
            }
            else if(sum < target){
                l++;
            }
            else{
                return target;
            }
        }
    }
    return closest_sum;
}

int main()
{
    vector< vector<int> > vvi;
    VI nums;
    nums.push_back(0);
//    nums.push_back(-3);
//    nums.push_back(3);
//    nums.push_back(-2);
//    nums.push_back(-2);
//    nums.push_back(-1);
//    nums.push_back(1);
//    nums.push_back(-1);
//    nums.push_back(-3);
//    nums.push_back(-2);
    cout << threeSumClosest(nums, 3) << endl;
    return 0;
}
