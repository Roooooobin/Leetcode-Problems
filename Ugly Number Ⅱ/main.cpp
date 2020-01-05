#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int nthUglyNumber(int n)
{
    int index2 = 0;
    int index3 = 0;
    int index5 = 0;
    int *uglyNums = new int[n];
    uglyNums[0] = 1;
    for(int i=1; i<n; i++){
        uglyNums[i] = min(uglyNums[index2]*2, min(uglyNums[index3]*3, uglyNums[index5]*5));
        //move pointer if one
        index2 += (uglyNums[i] == uglyNums[index2]*2);
        index3 += (uglyNums[i] == uglyNums[index3]*3);
        index5 += (uglyNums[i] == uglyNums[index5]*5);
    }
    return uglyNums[n-1];
}

int main()
{
    cout << nthUglyNumber(10) << endl;
    return 0;
}
