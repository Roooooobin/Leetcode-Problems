#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

void solve(vector<string>& ret, string s, int left, int right, int n)
{
    if(left == n && right == n){
        ret.push_back(s);
        return;
    }
    if(left < n) solve(ret, s+"(", left+1, right, n);
    if(right < n && left > right) solve(ret, s+")", left, right+1, n);
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    if(n == 0) return ans;
    solve(ans, "", 0, 0, n);
    return ans;
}

int main()
{
    for(auto s: generateParenthesis(3)){
        cout << s << endl;
    }
    return 0;
}
