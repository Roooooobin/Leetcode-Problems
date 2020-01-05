#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for(auto x: nums){
        ans ^= x;
    }
    return ans;
}

int main()
{

    return 0;
}
