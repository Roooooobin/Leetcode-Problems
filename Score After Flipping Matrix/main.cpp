#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int calcVal(vector<int> nums)
{
    int ret = 0;
    for(int i=0; i<nums.size(); i++){
        ret = ret * 2 + nums[i] - 0;
    }
    return ret;
}

int matrixScore(vector<vector<int>>& A) {
    int n = A.size(); //ÐÐÊý
    if(n == 0) return 0;
    int m = A[0].size();
    if(m == 0) return 0;
    for(int i=0; i<n; i++){
        if(A[i][0] == 0){
            for(int j=0; j<m; j++){
                A[i][j] ^= 1;
            }
        }
    }
    for(int j=1; j<m; j++){
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(A[i][j] == 0) cnt++;
        }
        if(cnt > n/2){
            for(int i=0; i<n; i++){
                A[i][j] ^= 1;
            }
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans += calcVal(A[i]);
    }
    return ans;
}

int main()
{
    vector<vector<int>> A = {{0,0,1,0}, {1,0,1,0}, {1,1,0,0}};
    cout << matrixScore(A) << endl;
    return 0;
}
