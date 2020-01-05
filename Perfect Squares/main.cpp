#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

void solve(int n, vector<int>& squareNums)
{
    int pos = lower_bound(squareNums.begin(), squareNums.end(), n) - squareNums.begin();

    return;
}

//struct NUM
//{
//    int val;
//    int cnt;
//    NUM(int x, int y):val(x), cnt(y){}
//};
//
//int numSquares(int n) {
//    int x = sqrt(n);
//    if(x * x == n) return 1;
//    vector<int> vis(n+1, 0);
//    queue<NUM> que;
//    que.push({n, 0});
//    vis[n] = 1;
//    int ans;
//    while(!que.empty()){
//        NUM cur = que.front();
////        cout << cur.val << endl;
//        que.pop();
//        vis[cur.val] = 1;
//        if(cur.val == 0){
//            ans = cur.cnt;
//            break;
//        }
//        x = sqrt(cur.val);
//        if(x * x == cur.val){
//            ans = cur.cnt + 1;
//            break;
//        }
//        for(int i=x; i>=0; i--){
//            if(!vis[cur.val-i*i]){
//                que.push({cur.val-i*i, cur.cnt+1});
//                vis[cur.val-i*i] = 1;
//            }
//        }
//    }
//    return ans;
//}

//int numSquares(int n)
//{
//    vector<int> dp(n+1, INT_MAX);
//    dp[0] = 0;
//    for(int i=1; i<=n; i++){
//        for(int j=1; j*j<=i; j++){
//            dp[i] = min(dp[i], dp[i-j*j]+1);
//        }
//    }
//    return dp.back();
//}

int numSquares(int n)
{
    while(n % 4 == 0){
        n /= 4;
    }
    if(n % 8 == 7) return 4;
    int x = sqrt(n);
    if(x * x == n) return 1;
    for(int i=1; i<=x; i++){
        int y = sqrt(n-i*i);
        if(y * y == n-i*i) return 2;
    }
    return 3;
}

int main()
{
    cout << numSquares(13) << endl;
//    int a[] = {1, 4, 9};
//    VI b(a, a+3);
//    cout << upper_bound(b.begin(), b.end(), 12) - b.begin() - 1;
    return 0;
}
