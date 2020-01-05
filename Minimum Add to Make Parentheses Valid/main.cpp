#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int minAddToMakeValid(string S) {
    stack<char> sc;
    for(int i=0; i<S.size(); i++){
        if(!sc.empty() && sc.top() == '(' && S[i] == ')'){
            sc.pop();
        }
        else{
            sc.push(S[i]);
        }
    }
    return sc.size();
}

int main()
{
    string S = "()((()))";
    cout << minAddToMakeValid(S) << endl;
    return 0;
}
