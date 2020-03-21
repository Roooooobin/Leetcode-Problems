#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }
    map<int, int> count_num;
    int max_cnt = -1;
    for(int x: a){
        count_num[x]++;
        max_cnt = max(max_cnt, count_num[x]);
    }
    cout << max_cnt << endl;
    return 0;
}
