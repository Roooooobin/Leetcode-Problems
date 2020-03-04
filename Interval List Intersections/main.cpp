#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
    int na = A.size(), nb = B.size();
    int i = 0, j = 0;
    vector<vector<int>> ans;
    while(i < na && j < nb){
        if(A[i][0] < B[j][0]){
            if(A[i][1] < B[j][0]){
                i++;
            }
            else if(A[i][1] >= B[j][0] && A[i][1] <= B[j][1]){
                ans.push_back(vector<int>{B[j][0], A[i][1]});
                i++;
            }
            else{
                ans.push_back(vector<int>{B[j][0], B[j][1]});
                j++;
            }
        }
        else if(A[i][0] == B[j][0]){
            if(A[i][1] >= B[j][0] && A[i][1] <= B[j][1]){
                ans.push_back(vector<int>{B[j][0], A[i][1]});
                i++;
            }
            else{
                ans.push_back(vector<int>{B[j][0], B[j][1]});
                j++;
            }
        }
        else{
            if(B[j][1] < A[i][0]){
                j++;
            }
            else if(B[j][1] >= A[i][0] && B[j][1] <= A[i][1]){
                ans.push_back(vector<int>{A[i][0], B[j][1]});
                j++;
            }
            else{
                ans.push_back(vector<int>{A[i][0], A[i][1]});
                i++;
            }
        }
    }
    return ans;
}

vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
    int na = A.size(), nb = B.size();
    int i = 0, j = 0;
    vector<vector<int>> ans;
    while(i < na && j < nb){
        int lo = max(A[i][0], B[j][0]);
        int hi = min(A[i][1], B[j][1]);
        if(lo <= hi) {
            ans.push_back(vector<int>{lo, hi});
        }
        if(A[i][1] < B[j][1]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
