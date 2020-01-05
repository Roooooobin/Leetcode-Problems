#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

string toLowerCase(string str) {
    for(int i=0; i<str.size(); i++){
        str[i] = ('A'<=str[i] && str[i]<='Z')? char(str[i]+32): str[i];
    }
    return str;
}

int main()
{
    cout << toLowerCase("sAsfsaSCC") << endl;
    return 0;
}
