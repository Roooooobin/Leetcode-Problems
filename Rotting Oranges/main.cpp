#include <bits/stdc++.h>
using namespace std;

bool check_boundaries(int x, int y, int row, int col){
    return !(x < 0 || x >= row || y < 0 || y >= col);
}

int orangesRotting(vector<vector<int>>& grid) {
    if(grid.empty() || grid[0].empty()) return 0;
    int row = grid.size(), col = grid[0].size();
    vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    queue<pair<int, int>> qii;
    map<pair<int, int>, bool> table;
    int cnt = 0;
    int cnt1 = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(grid[i][j] == 2 && !table[make_pair(i, j)]){
                qii.push(make_pair(i, j));
                table[make_pair(i, j)] = true;
                cnt++;
            }
            if(grid[i][j] == 1) cnt1++;
        }
    }
    if(cnt == 0){
        if(cnt1 == 0) return 0;
        else return -1;
    }
    int minute = 0;
    int ite = 0;
    while(true){
        if(cnt == 0) break;
        minute++;
        ite = 0;
        while(ite < cnt){
            int x = qii.front().first, y = qii.front().second;
            for(int i=0; i<4; i++){
                int dx = x+directions[i][0], dy = y+directions[i][1];
                bool flag1 = check_boundaries(dx, dy, row, col);
                bool flag2 = false;
                if(flag1) flag2 = grid[dx][dy] == 1;
                bool flag3 = !table[make_pair(dx, dy)];
                if(check_boundaries(dx, dy, row, col) && grid[dx][dy] == 1 && !table[make_pair(dx, dy)]){
                    qii.push(make_pair(dx, dy));
                    table[make_pair(dx, dy)] = true;
                }
            }
            qii.pop();
            ite++;
        }
        cnt = qii.size();
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(grid[i][j] == 1 && !table[make_pair(i, j)]) return -1;
        }
    }
    return minute-1;
}

int main() {
//    vector<vector<int>> grid = {{2, 1, 1}, {1, 1, 0}, {0, 1, 1}};
//    vector<vector<int>> grid = {{2, 1, 1}, {1, 2, 1}, {0, 0, 2}};
    vector<vector<int>> grid = {{0, 0, 1}};
    int ans = orangesRotting(grid);
    cout << ans << endl;
    return 0;
}