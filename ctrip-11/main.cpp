#include <bits/stdc++.h>
using namespace std;

//求最小客服人数
int main() {
    int n;
    cin >> n;
    vector<vector<int>> calls;
    int x, y;
    for(int i=0; i<n; ++i){
        scanf("%d,%d", &x, &y);
        calls.push_back({x, y});
    }
//    sort(calls.begin(), calls.end(), [](vector<int> a, vector<int> b){
//        return a[1] < b[1];
//    });
    unordered_set<int> table;
    int cnt = 0;
    for(int i=0; i<n; ++i){
        if(table.count(i)) continue;
        cnt++;
        table.insert(i);
        int tmp = i;
        int j = i;
        while(tmp < n){
            tmp++;
            if(tmp < n && !table.count(tmp) && calls[tmp][0] >= calls[j][1]){
                j = tmp;
                table.insert(tmp);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
