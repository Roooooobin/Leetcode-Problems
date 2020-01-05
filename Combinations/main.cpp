#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

void backtrack(vector<vector<int>>& ans, vector<int>& ret, int i, int n, int k)
{
    if(!k){
        ans.push_back(ret);
        return;
    }
    for(int j=i; j<=n; j++){
        ret.push_back(j);
        backtrack(ans, ret, j+1, n, k-1);
        ret.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> ans;
    if(n < k) return res;
    vector<int> ret;
    backtrack(ans, ret, 1, n, k);
    return ans;
}

int main()
{
    vector<vector<int>> ans = combine(9, 2);
    for(auto v: ans){
        for(auto x: v){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
