#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();
    vector<int> arr;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr.push_back(matrix[i][j]);
        }
    }
    sort(arr.begin(), arr.end());
    return arr[k-1];
}

int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();
    vector<int> arr;

}

int main() {
    vector<vector<int>> mat = {{1, 5, 9}, {10, 11, 13}, {12, 13, 15}};
    cout << kthSmallest(mat, 8) << endl;
    return 0;
}
