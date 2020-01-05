#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//int searchInsert(vector<int>& nums, int target) {
//    if(nums.empty()) return 0;
//    return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
//}

int searchInsert(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size();
    while(l < r){
        int mid = (l+r) / 2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target){
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
    return l;
}

int main()
{
    int a[] = {1, 3, 4 ,5, 6};
    VI nums(a, a+5);
    cout << searchInsert(nums, 7) << endl;
    return 0;
}
