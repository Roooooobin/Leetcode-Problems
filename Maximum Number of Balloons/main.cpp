#include <bits/stdc++.h>
using namespace std;

int maxNumberOfBalloons(string text) {
    unordered_map<char, int> a;
    for(char c: text){
        a[c] += 1;
    }
    int min_ = a['b'];
    string s1 = "an", s2 = "lo";
    for(int i=0; i<2; ++i){
        min_ = min(a[s1[i]], min_);
    }
    for(int i=0; i<2; ++i){
        min_ = min(a[s2[i]] / 2, min_);
    }
    return min_;
}

int main() {
    cout << maxNumberOfBalloons("ballon") << endl;
    return 0;
}
