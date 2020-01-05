#include <cstdio>
#include <cstdlib>
#include <regex>
#include <iostream>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        s = regex_replace(s, regex("([a-z])\\1{2,}"), "$1$1");
        s = regex_replace(s, regex("([a-z])\\1{1}([a-z])\\2{1}"), "$1$1$2");
        cout << s << endl;
    }
    return 0;
}
