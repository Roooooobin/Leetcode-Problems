#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
    vector<vector<int>> ans(people.size(), vector<int>(2, -1));
    int n = people.size();
    sort(people.begin(), people.end(), [](const vector<int>& a, const vector<int>& b){
            if(a[0] == b[0]) return a[1] > b[1];
            else return a[0] < b[0];
        });
    for(int i=0; i<n; i++){
        cout << people[i][0] << ' ' << people[i][1] << endl;
    }
    for(int i=0; i<n; i++){
        int cnt = 0; //no of larger ones ahead
        int j;
        for(j=0; j<n; j++){
            if(ans[j][0] != -1) continue;
            if(cnt == people[i][1]) break;
            if(ans[j][0] == -1) cnt++;
        }
        ans[j][0] = people[i][0];
        ans[j][1] = people[i][1];
    }
    return ans;
}

int main()
{
    vector<vector<int>> people = {{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}};
    for(auto vi: reconstructQueue(people)){
        cout << vi[0] << ' ' << vi[1] << endl;
    }
    return 0;
}
