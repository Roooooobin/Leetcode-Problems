#include <bits/stdc++.h>
using namespace std;

vector<int> dx = {-1, 1, 0, 0};
vector<int> dy = {0, 0, -1, 1};

void dfs(vector<vector<int>>& nums, int x, int y, int n, int m, vector<int>& vi){
    if(x < 0 || x >= n || y < 0 || y >= m || nums[x][y] != 1) return;
    nums[x][y] = 0;
    vi.push_back(x * 103 + y);
    for(int i=0; i<4; i++){
        dfs(nums, x+dx[i], y+dy[i], n, m, vi);
    }
    return;
}

int shortestBridge(vector<vector<int>>& nums) {
    if(nums.empty() || nums[0].empty()) return 0;
    int n = nums.size(), m = nums[0].size();
    vector<vector<int>> arr(2, vector<int>{});
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(nums[i][j] == 1){
                dfs(nums, i, j, n, m, arr[cnt]);
                cnt++;
            }
        }
    }
//    for(auto x: arr[0]){
//        cout << x / 103 << ' ' << x % 103 << endl;
//    }
//    cout << "---------------------------------" << endl;
//    for(auto x: arr[1]){
//        cout << x / 103 << ' ' << x % 103 << endl;
//    }
    int min_ = n * m;
    for(int i=0; i<arr[0].size(); i++){
        for(int j=0; j<arr[1].size(); j++){
            min_ = min(abs(arr[0][i] / 103 - arr[1][j] / 103) + abs(arr[0][i] % 103 - arr[1][j] % 103), min_);
        }
    }
    return min_ - 1;
}

/*
DFS: first paint the two islands apart and then expand to reach the other island
 */
int paint(vector<vector<int>>& A, int i, int j) {
    if (i < 0 || j < 0 || i == A.size() || j == A.size() || A[i][j] != 1) return 0;
    A[i][j] = 2;
    return 1 + paint(A, i + 1, j) + paint(A, i - 1, j) + paint(A, i, j + 1) + paint(A, i, j - 1);
}
bool expand(vector<vector<int>>& A, int i, int j, int cl) {
    if (i < 0 || j < 0 || i == A.size() || j == A.size()) return false;
    if (A[i][j] == 0) A[i][j] = cl + 1;
    return A[i][j] == 1;
}
int shortestBridge(vector<vector<int>>& A) {
    for (int i = 0, found = 0; !found && i < A.size(); ++i)
        for (int j = 0; !found && j < A[0].size(); ++j) found = paint(A, i, j);

    for (int cl = 2; ; ++cl)
        for (int i = 0; i < A.size(); ++i)
            for (int j = 0; j < A.size(); ++j)
                if (A[i][j] == cl && ((expand(A, i - 1, j, cl) || expand(A, i, j - 1, cl) ||
                                       expand(A, i + 1, j, cl) || expand(A, i, j + 1, cl))))
                    return cl - 2;
}

int main() {
    vector<vector<int>> nums = {{1, 1, 1, 1, 1}, {1, 0, 0, 0, 1}, {1, 0, 1, 0, 1}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 1}};
    cout << shortestBridge(nums) << endl;
    return 0;
}
