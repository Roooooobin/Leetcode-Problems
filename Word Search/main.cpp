#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

bool dfs(int num, int i, int j, vector<vector<char>>& board, string& word)
{
    if(!(i >= 0 && i < board.size() && j >= 0 && j < board[0].size()) || board[i][j] != word[num]) return false;
    if(num == word.size()-1) return true;
    //used
//    char tmp = board[i][j];
//    board[i][j] = '*';
    board[i][j] ^= -1;
    bool flag = dfs(num+1, i+1, j, board, word) ||
                dfs(num+1, i-1, j, board, word) ||
                dfs(num+1, i, j+1, board, word) ||
                dfs(num+1, i, j-1, board, word);
    //reset to backtrack
//    board[i][j] = tmp;
    board[i][j] ^= -1;
    return flag;
}

bool exist(vector<vector<char>>& board, string word) {
    if(board.empty() || board[0].empty()) return false;
    int n = board.size();
    int m = board[0].size();
    bool flag = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(dfs(0, i, j, board, word)) return true;
        }
    }
    return false;
}

int main()
{
    char a1[] = {'C', 'A', 'A'};
    char a2[] = {'A', 'A', 'A'};
    char a3[] = {'B', 'C', 'D'};
    vector<char> vc1(a1, a1+3);
    vector<char> vc2(a2, a2+3);
    vector<char> vc3(a3, a3+3);
    vector<vector<char>> board;
    board.push_back(vc1);
    board.push_back(vc2);
    board.push_back(vc3);
    cout << exist(board, "CAAA") << endl;
    char x = 'c';
    cout << ((x ^= -1)) << endl;
    return 0;
}
