#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, hit, t;
    cin >> n >> hit >> t;
    int x;
    vector<int> monster;
    for(int i=0; i<n; ++i){
        cin >> x;
        monster.push_back(x);
    }
    sort(monster.begin(), monster.end());
    int i = 0;
    int cnt = 0;
    while(i < n){
        int time_needed = monster[i] / hit + (monster[i] % hit != 0);
        if(t >= time_needed){
            cnt++;
            i++;
            t -= time_needed;
        }
        else{
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}
