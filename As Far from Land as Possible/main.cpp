#include <bits/stdc++.h>
using namespace std;

// leetcode-1162 by Robin with hint
int maxDistance(vector<vector<int>>& grid) {
    queue<pair<int, int>> q;
    int n = grid.size();
    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(grid[i][j] == 1){
                q.push({i, j});
            }
        }
    }
    int step = 0;
    if(q.size() == n*n) return -1;
    while(true){
        int size = q.size();
        if(size == 0) break;
        step++;
        while(size--){
            int curx = q.front().first, cury = q.front().second;
            q.pop();
            for(int i=0; i<4; ++i){
                int nextx = curx + dx[i], nexty = cury + dy[i];
                if(nextx >= 0 && nextx < n && nexty >= 0 && nexty < n && grid[nextx][nexty] == 0){
                    grid[nextx][nexty] = step;
                    q.push({nextx, nexty});
                }
            }
        }
    }
    return step-1;
}

int main() {
    vector<vector<int>> grid = {{1, 0, 1}, {0, 0, 0}, {1, 0, 1}};
    cout << maxDistance(grid) << endl;
    return 0;
}
