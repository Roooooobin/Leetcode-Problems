#include <bits/stdc++.h>
using namespace std;

bool is_outside(int x, int y, int m, int n){
    return x < 0 || x >= m || y < 0 || y >= n;
}

void dfs(int x, int y, vector<vector<char>>& board) {
    int m = board.size(), n = board[0].size();
    if(is_outside(x, y, m, n)) return;
    board[x][y] = 'T';
    if(!is_outside(x+1, y, m, n) && board[x+1][y] == 'O') dfs(x+1, y, board);
    if(!is_outside(x-1, y, m, n) && board[x-1][y] == 'O') dfs(x-1, y, board);
    if(!is_outside(x, y+1, m, n) && board[x][y+1] == 'O') dfs(x, y+1, board);
    if(!is_outside(x, y-1, m, n) && board[x][y-1] == 'O') dfs(x, y-1, board);
}

void solve(vector<vector<char>>& board) {
    if(board.empty() || board[0].empty()) return;
    int m = board.size();
    int n = board[0].size();
    for(int i=0; i<m; i++){
        if(i == 0 || i == m-1){
            for(int j=0; j<n; j++){
                if(board[i][j] == 'O') dfs(i, j, board);
            }
        }
        else{
            if(board[i][0] == 'O') dfs(i, 0, board);
            if(board[i][n-1] == 'O') dfs(i, n-1, board);
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == 'T'){
                board[i][j] = 'O';
            }
            else if(board[i][j] == 'O'){
                board[i][j] = 'X';
            }
        }
    }
}

int main() {

    return 0;
}
