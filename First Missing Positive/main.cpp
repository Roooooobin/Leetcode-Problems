#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int firstMissingPositive(vector<int>& nums) {
    bool tble[1000000] = {};
    int n = nums.size();
    for(int x: nums){
        if(x > n || x <= 0) continue;
        tble[x] = true;
    }
    for(int i=1; i<=n; i++){
        if(!tble[i]) return i;
    }
    return n+1;
}

int firstMissingPositive(vector<int>& nums)
{
    int n = nums.size();
    if(n == 0) return 1;
    //ignore all the invalid numbers
    for(int i=0; i<n; i++){
        if(nums[i] <= 0 || nums[i] > n){
            nums[i] = n+1;
        }
    }
    //-number indicates number exists, judge if already < 0 to avoid duplicates
    for(int i=0; i<n; i++){
        if(abs(nums[i]) != n+1 && nums[abs(nums[i])%n] > 0){
            nums[abs(nums[i])%n] *= -1;
        }
    }
    int ans = nums[0] > 0? n: n+1;
    for(int i=1; i<n; i++){
        if(nums[i] > 0){
            ans = i;
            break;
        }
    }
    return ans;
}

int firstMissingPositive(vector<int>& nums)
{
    int n = nums.size();
    for(int i = 0; i < n; ++ i)
        while(nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
            swap(nums[i], nums[nums[i] - 1]);

    for(int i = 0; i < n; ++ i)
        if(nums[i] != i + 1)
            return i + 1;

    return n + 1;
}

int main()
{
    VI a = {2, 1, 4};
    cout << firstMissingPositive(a) << endl;
    return 0;
}
