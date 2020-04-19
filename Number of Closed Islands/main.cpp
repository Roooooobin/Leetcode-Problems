#include <bits/stdc++.h>
using namespace std;

// leetcode-1254 by Robin
void dfs(vector<vector<int>>& grid, int i, int j){
    if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 1){
        return;
    }
    grid[i][j] = 1;
    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
}

// 从四周的0往内dfs，把所有的0变为1，最后剩下的0都是被包围的
int closedIsland(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    if(n == 1 || m == 1) return 0;
    // four borders
    for(int j=0; j<m; ++j){
        for(int i=0; i<n; i+=n-1){
            if(grid[i][j] == 0){
                dfs(grid, i, j);
            }
        }
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; j+=m-1){
            if(grid[i][j] == 0){
                dfs(grid, i, j);
            }
        }
    }
    int cnt = 0;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(grid[i][j] == 0){
                cnt++;
                dfs(grid, i, j);
            }
        }
    }
    return cnt;
}

int main() {
    vector<vector<int>> grid = {{1}};
    cout << closedIsland(grid) << endl;
    return 0;
}
