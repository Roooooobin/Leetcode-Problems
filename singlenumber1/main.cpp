#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int singleNumber(vector<int>& nums) {
    int ret = 0;
    for(int i=0; i<nums.size(); i++){
        ret ^= nums[i];
    }
    return ret;
}

int main()
{
    int a[7] = {4, 2, 4, 2, 4, 2, 7};
    VI v(a, a+7);
    cout << singleNumber(v) << endl;
    return 0;
}
