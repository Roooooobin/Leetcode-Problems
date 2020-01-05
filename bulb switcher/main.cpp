#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int bulbSwitch(int n) {
    int cnt = 0;
    for(int i=1; i*i<=n; i++, cnt++);
    return cnt;
}

int main()
{
    cout << bulbSwitch(4) << endl;
    cout << bulbSwitch(9) << endl;
    return 0;
}
