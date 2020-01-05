#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int findContentChildren(vector<int>& g, vector<int>& s) {
    if(g.size() == 0 || s.size() == 0) return 0;
    sort(g.begin(), g.end(), greater<int>());
    sort(s.begin(), s.end(), greater<int>());
    int j = 0;
    int cnt = 0;
    for(int i=0; i<g.size(); i++){
        if(g[i] <= s[j]){
            cnt++;
            j++;
            if(j == s.size()) break;
        }
    }
    return cnt;
}

int main()
{
    VI g = {1, 2, 3};
    VI s = {1, 2};
    cout << findContentChildren(g, s) << endl;
    return 0;
}
