#include <bits/stdc++.h>
using namespace std;

bool check_boundary(int x, int y, int n, int m){
    return !(x < 0 || x >= n || y < 0 || y >= m);
}

int calc_area(int x, int y, int n, int m, vector<vector<int>>& grid){
    if(grid[x][y]) grid[x][y] = 0;
    else return 0;
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    int area = 1;
    for(int i=0; i<4; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if(check_boundary(nx, ny, n, m)){
            area += calc_area(nx, ny, n, m, grid);
        }
    }
    return area;
}

int maxAreaOfIsland(vector<vector<int>>& grid) {
    if(grid.empty()) return 0;
    int n = grid.size(), m = grid[0].size();
    int max_area = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]){
                max_area = max(max_area, calc_area(i, j, n, m, grid));
            }
        }
    }
    return max_area;
}

int main() {
    vector<vector<int>> grid = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    cout << maxAreaOfIsland(grid) << endl;
    return 0;
}