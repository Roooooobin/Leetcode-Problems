#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int twoCitySchedCost(vector<vector<int>>& costs) {
    sort(costs.begin(), costs.end(), [](vector<int> a, vector<int> b){
                return (a[0]-a[1]) < (b[0]-b[1]);
         });
//    for(int i=0; i<costs.size(); i++){
//        cout << costs[i][0] << ' ' << costs[i][1] << endl;
//    }
    int ans = 0;
    for(int i=0; i<costs.size()/2; i++){
        ans += costs[i][0];
    }
    for(int i=costs.size()/2; i<costs.size(); i++){
        ans += costs[i][1];
    }
    return ans;
}

int main()
{
    vector<vector<int>> costs = {{10, 20}, {30, 200}, {20, 50}, {30, 20}};
    cout << twoCitySchedCost(costs) << endl;
    return 0;
}
