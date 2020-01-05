#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    return nums[nums.size()/2];
}

int majorityElement(vector<int>& nums)
{
    int candidate;
    int cnt = 0;
    for(int i=0; i<nums.size(); i++){
        if(cnt == 0){
            candidate = nums[i];
        }
        cnt += (nums[i] == candidate ? 1 : -1);
    }
    return candidate;
}

int main()
{

    return 0;
}
