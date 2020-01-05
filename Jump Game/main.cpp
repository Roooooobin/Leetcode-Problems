#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

bool canJump(vector<int>& nums) {
    if(nums.size() == 1) return true;
    if(nums.empty() || nums[0] == 0) return false;
    int steps = nums[0];
    int n = nums.size();
    int i = 0;
    while(steps && i < n){
        //cout << i << ' ' << steps << endl;
        if(i + steps >= n-1) return true;
        steps--;
        i++;
        steps = max(steps, nums[i]);
    }
    return false;
}

int main()
{
    int a[] = {7, 0, 9, 6, 9, 6, 1, 7, 9, 0, 1, 2, 9, 0, 3};
    VI nums(a, a+15);
    cout << canJump(nums) << endl;
    return 0;
}
