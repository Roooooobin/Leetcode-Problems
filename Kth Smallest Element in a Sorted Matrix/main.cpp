#include <bits/stdc++.h>
using namespace std;

// brute force
//int kthSmallest(vector<vector<int>>& matrix, int k) {
//    int n = matrix.size();
//    vector<int> arr;
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            arr.push_back(matrix[i][j]);
//        }
//    }
//    sort(arr.begin(), arr.end());
//    return arr[k-1];
//}

// binary search
int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();
    int l = matrix[0][0], r = matrix[n-1][n-1], mid;
    while(l < r){
        mid = (l+r) >> 1;
        int cnt = 0, j = n-1;
        for(int i=0; i<n; i++){
            while(j >= 0 && matrix[i][j] > mid) j--;
            cnt += j+1;
        }
        if(cnt >= k){
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
    return l;
}

int main() {
    vector<vector<int>> mat = {{1, 5, 9}, {10, 11, 13}, {12, 13, 15}};
    cout << kthSmallest(mat, 8) << endl;
    return 0;
}
