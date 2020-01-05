#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

vector<int> findDuplicates(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(nums[abs(nums[i])-1] < 0){
            ans.push_back(abs(nums[i]));
            continue;
        }
        nums[abs(nums[i])-1] *= -1;
    }
    return ans;
}

int main()
{
    VI nums = {4, 3, 2, 7, 4, 2, 3, 1};
    VI ans = findDuplicates(nums);
    for(auto x: ans){
        cout << x << ' ';
    }
    return 0;
}
