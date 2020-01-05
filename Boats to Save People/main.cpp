#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int numRescueBoats(vector<int>& people, int limit) {
    int n = people.size();
    int l = 0, r = n-1;
    int ans = 0;
    while(l <= r){
        ans++;
        if(people[l] + people[r] < limit){
            l++;
        }
        r--;
    }
    return ans;
}

int main()
{

    return 0;
}
