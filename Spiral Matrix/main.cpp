#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    if(matrix.empty() || matrix[0].empty()) return ans;
    int n = matrix.size(), m = matrix[0].size();
    int r1 = 0, r2 = n-1, c1 = 0, c2 = m-1;
    while(r1 <= r2 && c1 <= c2){
        for(int c=c1; c<=c2; c++) ans.push_back(matrix[r1][c]);
        for(int r=r1+1; r<=r2; r++) ans.push_back(matrix[r][c2]);
        if(r1 < r2 && c1 < c2){
            for(int c=c2-1; c>c1; c--) ans.push_back(matrix[r2][c]);
            for(int r=r2; r>r1; r--) ans.push_back(matrix[r][c1]);
        }
        r1++, r2--;
        c1++, c2--;
    }
    return ans;
}

int main() {
//    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
//    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> matrix = {{7}, {8}, {9}};
    vector<int> ans = spiralOrder(matrix);
    for(auto x: ans){
        cout << x << ' ';
    }
    return 0;
}
