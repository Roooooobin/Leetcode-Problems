#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    int row[9][9] = {0}, column[9][9] = {0}, sudoku[9][9] = {0};
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[0].size(); j++){
            if(board[i][j] != '.'){
                int num = board[i][j] - '0' - 1;
                int k = i / 3 * 3 + j / 3;
                if(row[i][num] || column[j][num] || sudoku[k][num]) return false;
                row[i][num] = column[j][num] = sudoku[k][num] = 1;
            }
        }
    }
    return true;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}