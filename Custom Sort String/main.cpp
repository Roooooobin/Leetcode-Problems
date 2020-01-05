#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

string customSortString(string T, string S) {
    int lenT = T.size();
    int cnt = 0;
    vector<int> reorder(26, lenT);
    for(int i=0; i<lenT; i++){
        if(reorder[T[i]-'a'] == lenT) reorder[T[i]-'a'] = cnt++;
    }
    sort(S.begin(), S.end(), [=](const char& a, const char& b){
            return reorder[a-'a'] < reorder[b-'a'];
         });
    return S;
}

int main()
{
    cout << customSortString("cba", "abcd") << endl;
    return 0;
}
