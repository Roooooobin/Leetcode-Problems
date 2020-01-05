#include <bits/stdc++.h>
using namespace std;

int is_edge(int x, int y, int n, int m, vector<vector<int>>& grid ){
    return (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == 0);
}

int islandPerimeter(vector<vector<int>>& grid) {
    if(grid.empty()) return 0;
    int n = grid.size();
    vector<int> dx = {0, 0, -1, 1};
    vector<int> dy = {1, -1, 0, 0};
    int perimeter = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<grid[i].size(); j++){
            if(grid[i][j]){
                for(int k=0; k<4; k++){
                    perimeter += is_edge(i+dx[k], j+dy[k], n, grid[i].size(), grid);
                }
            }
        }
    }
    return perimeter;
}

int main() {
    vector<vector<int>> grid = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
    cout << islandPerimeter(grid) << endl;
    return 0;
}