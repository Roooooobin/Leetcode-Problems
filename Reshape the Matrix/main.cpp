#include <bits/stdc++.h>
using namespace std;

// leetcode-566 by Robin
vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
    int n = nums.size();
    int m = nums[0].size();
    if(n * m != r * c) return nums;
    vector<vector<int>> ans(r, vector<int>(c));
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            int idx = i * m + j;
            int row = idx / c;
            int col = idx % c;
            ans[row][col] = nums[i][j];
        }
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
