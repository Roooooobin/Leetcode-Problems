#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> sc;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(char c: s){
        if(c == '('){
            sc.push(c);
        }
        else if(c == ')'){
            if(sc.empty()){
                cnt3++;
            }
            else{
                cnt1++;
                sc.pop();
            }
        }
    }
    cnt2 = sc.size();
    cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << endl;
    return 0;
}
