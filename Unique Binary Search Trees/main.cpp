#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int numTrees(int n) {
    vector<int> catalan(n+1, 0);
    catalan[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            catalan[i] += catalan[j] * catalan[i-j-1];
        }
    }
    return catalan[n];
}

int main()
{
    cout << numTrees(4) << endl;
    return 0;
}
