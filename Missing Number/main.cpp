#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = (n+1) * n / 2;
    for(int i=0; i<n; i++){
        sum -= nums[i];
    }
    return sum;
}

int main()
{

    return 0;
}
