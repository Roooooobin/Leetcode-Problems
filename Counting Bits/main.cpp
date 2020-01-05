#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//vector<int> countBits(int num) {
//    vector<int> ans = {0};
//    if(num == 0) return ans;
//    ans.push_back(1);
//    int cur = 1;
//    int i;
//    while(cur < num){
//        ans.push_back(1);
//        cur++;
//        for(i=1; i<cur; i++){
//            if(i + cur > num) return ans;
//            ans.push_back(ans[i]+ans[cur]);
//        }
//        cur = i + cur - 1;
//    }
//    return ans;
//}

vector<int> countBits(int num) {
    vector<int> ans(num+1, 0);
    for(int i=1; i<=num; i++){
        ans[i] = ans[i&(i-1)] + 1;
    }
    return ans;
}

int main()
{
    vector<int> ans = countBits(4);
    for(auto x: ans){
        cout << x << endl;
    }
    return 0;
}
