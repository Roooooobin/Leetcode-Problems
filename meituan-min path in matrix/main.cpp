#include <bits/stdc++.h>
using namespace std;

/*
 给定一个包含非负整数的 M x N 迷宫，请找出一条从左上角到右下角的路径，使得路径上的数字总和最小。每次只能向下或者向右移动一步。

 第一行包含两个整数M和N，以空格隔开，1≤N≤10，1≤N≤10。
接下来的M行中，每行包含N个数字

 找出总和最小的路径，输出路径上的数字总和。
 */

int main()
{
    int m, n;
    cin >> m >> n;
    int matrix[13][13];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
        }
    }
    int dp[13][13];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            dp[i][j] = 1000000;
        }
    }
    dp[0][0] = matrix[0][0];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i != 0){
                dp[i][j] = min(dp[i][j], dp[i-1][j] + matrix[i][j]);
            }
            if(j != 0){
                dp[i][j] = min(dp[i][j], dp[i][j-1] + matrix[i][j]);
            }
        }
    }
    cout << dp[m-1][n-1] << endl;
    return 0;
}