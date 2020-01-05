#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if(matrix.empty() || matrix[0].empty() ) return false;
    int n = matrix.size();
    int m = matrix[0].size();
    int i = n-1;
    int j = 0;
    while(i >= 0 && j < m){
        if(matrix[i][j] == target) return true;
        else if(matrix[i][j] < target){
            j++;
        }
        else{
            i--;
        }
    }
    return false;
}

int main()
{
    int a[4] = {1, 3, 5, 7};
    int b[4] = {4, 11, 16, 20};
    int c[4] = {14, 30, 34, 50};
    int d[4] = {31, 31, 53, 76};
    VI va(a, a+4);
    VI vb(b, b+4);
    VI vc(c, c+4);
    VI vd(d, d+4);
    vector< VI > V;
    V.push_back(va);
    V.push_back(vb);
    V.push_back(vc);
    V.push_back(vd);
    cout << searchMatrix(V, 30) << endl;
    return 0;
}
