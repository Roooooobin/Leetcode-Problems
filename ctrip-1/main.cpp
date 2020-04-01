#include <bits/stdc++.h>
using namespace std;

//携程海洋馆的海豚小宝宝
int main() {
    int n, m, p;
    cin >> n >> m >> p;
    vector<int> birth;
    int y;
    for(int i=0; i<p; ++i){
        cin >> y;
        birth.push_back(y);
    }
    sort(birth.begin(), birth.end());
    int x;
    cin >> x;
    vector<int> dop(m+1, 0);
    dop[0] = n;
    for(int i=1; i<=x; ++i){
        for(int j=m; j>=1; --j){
            dop[j] = dop[j-1];
        }
        dop[0] = 0;
        for(int j=0; j<p; j++){
            dop[0] += dop[birth[j]];
        }
    }
    int sum = 0;
    for(int i=0; i<=m; ++i){
        sum += dop[i];
    }
    cout << sum << endl;
    return 0;
}
