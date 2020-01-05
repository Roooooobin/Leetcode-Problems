#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

bool isSubsequence(string s, string t) {
    int idx = 0;
    for(int i=0; i<t.size(); i++){
        if(t[i] == s[idx]){
            idx++;
        }
    }
    return idx == s.size();
}

int main()
{
    cout << isSubsequence("axc", "ahbgdc") << endl;
    return 0;
}
