#include <bits/stdc++.h>
using namespace std;

int max_ = -1;
vector<int> dx = {0, 0, -1, 1};
vector<int> dy = {1, -1, 0, 0};

void backtracking(vector<vector<char> >& pos, int row, int col, int m, int n, int cur){
    max_ = max(max_, cur);
    if(row == m) return;
    if(pos[row][col] == '*'){
         if(col == n-1){
             backtracking(pos, row+1, 0, m, n, cur);
         }
         else{
             backtracking(pos, row, col+1, m, n, cur);
         }
    }
    else{
        vector<int> adjust;
        for(int i=0; i<4; i++){
            int nxtrow = row + dx[i], nxtcol = col + dy[i];
            if(nxtrow >= 0 && nxtrow < m && nxtcol >= 0 && nxtcol < m && pos[nxtrow][nxtcol] == '.'){
                adjust.push_back(i);
                pos[nxtrow][nxtcol] = '*';
            }
        }
        if(col == n-1){
            backtracking(pos, row+1, 0, m, n, cur+1);
        }
        else{
            backtracking(pos, row, col+1, m, n, cur+1);
        }
        // 还原
        for(int i: adjust){
            pos[row+dx[i]][col+dy[i]] = '.';
        }
        if(col == n-1){
            backtracking(pos, row+1, 0, m, n, cur);
        }
        else{
            backtracking(pos, row, col+1, m, n, cur);
        }
    }
}

int GetMaxStaffs(vector<vector<char> >& pos) {
    int m = pos.size(), n = pos[0].size();
    backtracking(pos, 0, 0, m, n, 0);
    return max_;
}

int main() {
//    vector<vector<char>> pos = {{'*','.','*','*','.'},{'*','.','*','*','*'},{'*','.','*','*','.'}};
    vector<vector<char>> pos = {{'.','.','.','.'},{'.','*','.','.'},{'.','.','*','.'},{'.','.','.','*'}};
    cout << GetMaxStaffs(pos) << endl;
    return 0;
}
