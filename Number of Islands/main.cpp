#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

void dfs(int i, int j, vector<vector<char>>& grid)
{
    if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0') return;
    grid[i][j] = '0';
    dfs(i+1, j, grid);
    dfs(i-1, j, grid);
    dfs(i, j+1, grid);
    dfs(i, j-1, grid);
    return;
}

int numIslands(vector<vector<char>>& grid) {
    if(grid.empty() || grid[0].empty()) return 0;
    int cnt = 0;
    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[0].size(); j++){
            if(grid[i][j] == '1'){
                cnt++;
                dfs(i, j, grid);
            }
        }
    }
//    for(int i=0; i<grid.size(); i++){
//        for(int j=0; j<grid[0].size(); j++){
//            cout << grid[i][j] << ' ';
//        }
//        cout << endl;
//    }
    return cnt;
}

int main()
{
    char s1[] = {'1', '1', '1', '1', '0'};
    char s2[] = {'1', '1', '0', '1', '0'};
    char s3[] = {'1', '0', '1', '0', '0'};
    char s4[] = {'0', '0', '0', '1', '0'};
    vector<vector<char>> grid;
    grid.push_back(vector<char>(s1, s1+5));
    grid.push_back(vector<char>(s2, s2+5));
    grid.push_back(vector<char>(s3, s3+5));
    grid.push_back(vector<char>(s4, s4+5));
    cout << numIslands(grid) << endl;
    return 0;
}
