#include <bits/stdc++.h>
using namespace std;

int minimumTotal(vector<vector<int> > &triangle) {
    int n = triangle.size();
    vector<int> dp(triangle.back());
    for(int l=n-2; l>=0; l--){
        for(int i=0; i<=l; i++){
            dp[i] = min(dp[i], dp[i+1]) + triangle[l][i];
        }
    }
    return dp[0];
}

int main() {
    int h;
    cin >> h;
    vector<vector<int>> triangle(h, vector<int>((h-1)*h/2, 0));
//    for(auto & i : triangle){
//        for(int j : i){
//            cout << j << endl;
//        }
//    }
    for(int i=0; i<h; i++){
        for(int j=0; j<=i; j++){
            cin >> triangle[i][j];
        }
    }
//    for(int i=0; i<triangle.size(); i++){
//        for(int j=0; j<triangle[i].size(); j++){
//            cout << i << ' ' << j << ' ' << triangle[i][j] << endl;
//        }
//    }
    cout << minimumTotal(triangle) << endl;
    return 0;
}