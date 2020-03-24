#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> strs;
    string s;
    for(int i=0; i<n; ++i){
        cin >> s;
        strs.push_back(s);
    }
    int i, j;
    while(cin >> i >> j){
        i--, j--;
        string a = strs[i];
        string b = strs[j];
        int k=0;
        for(k; k<a.size() && k<b.size() && a[k]==b[k]; k++);
        cout << k << endl;
    }
    return 0;
}
