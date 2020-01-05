#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end(), greater<int>());
    return nums[k-1];
}

int main()
{
    int a[] = {3, 2, 4, 1, 5, 6};
    VI nums(a, a+6);
    cout << findKthLargest(nums, 2) << endl;
    return 0;
}
