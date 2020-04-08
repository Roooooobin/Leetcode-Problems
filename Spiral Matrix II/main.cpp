#include <bits/stdc++.h>
using namespace std;

// leetcode-59 by Robin
vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> ans(n, vector<int>(n, 0));
    int num = 1;
    int r1 = 0, r2 = n-1, c1 = 0, c2 = n-1;
    while(r1 <= r2 && c1 <= c2){
        for(int c=c1; c<=c2; ++c) ans[r1][c] = num++;
        for(int r=r1+1; r<=r2; ++r) ans[r][c2] = num++;
        if(r1 < r2 && c1 < c2){
            for(int c=c2-1; c>c1; --c) ans[r2][c] = num++;
            for(int r=r2; r>c1; --r) ans[r][c1] = num++;
        }
        r1++, r2--;
        c1++, c2--;
    }
    return ans;
}

int main() {
    vector<vector<int> > res = generateMatrix(3);
    return 0;
}
