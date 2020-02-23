#include <bits/stdc++.h>
using namespace std;

bool isLongPressedName(string name, string typed) {
    int i = 0, j = 0;
    int cnt1, cnt2;
    while(i < name.size() && j < typed.size()){
        cnt1 = 0;
        cnt2 = 0;
        char c = name[i];
        if(typed[j] != c) return false;
        while(i < name.size() && name[i] == c){
            i++;
            cnt1++;
        }
        while(j < typed.size() && typed[j] == c){
            j++;
            cnt2++;
        }
        if(cnt1 > cnt2) return false;
    }
    return i == name.size() && j == typed.size();
}

int main() {
    cout << isLongPressedName("abc", "aab") << endl;
    return 0;
}
