#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char a[300];
    a['-'-'0'] = '-';
    for(int i=1; i<=9; i++){
        cin >> a[i];
    }
    for(int i=0; i<s.size(); ++i){
        s[i] = a[s[i]-'0'];
    }
    cout << s << endl;
    return 0;
}
