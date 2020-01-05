#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

void solve(int n, int n1, int n2, string ret, vector<string>& ans)
{
    if(n1 == n && n2 == n){
        ans.push_back(ret);
        return;
    }
    //add '('
    if(n1 < n){
        solve(n, n1+1, n2, ret+'(', ans);
    }
    //add ')' if n2 < n1 to ensure validity
    if(n2 < n1){
        solve(n, n1, n2+1, ret+')', ans);
    }
}

vector<string> generateParenthesis(int n) {
    string ret;
    vector<string> ans;
    solve(n, 0, 0, ret, ans);
    return ans;
}

int main()
{
    vector<string> vs = generateParenthesis(3);
    cout << vs.size() << endl;
    for(auto s: vs){
        cout << s << endl;
    }
    return 0;
}
