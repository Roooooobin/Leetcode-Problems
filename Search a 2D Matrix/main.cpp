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
    int l = 0, r = n-1;
    int mid;
    while(l < r){
        mid = (l+r) >> 1;
        //cout << l << ' ' << r << endl;
        if(target == matrix[mid][0] || target == matrix[mid][m-1]) return true;
        else if(target < matrix[mid][0]){
            r = mid;
        }
        else if(target > matrix[mid][m-1]){
            l = mid + 1;
        }
        else{
            return binary_search(matrix[mid].begin(), matrix[mid].end(), target);
        }
    }
    return binary_search(matrix[l].begin(), matrix[l].end(), target);
}

int main()
{
    int a[4] = {1, 3, 5, 7};
    int b[4] = {10, 11, 16, 20};
    int c[4] = {23, 30, 34, 50};
    VI va(a, a+4);
    VI vb(b, b+4);
    VI vc(c, c+4);
    vector< VI > V;
    V.push_back(va);
    V.push_back(vb);
    V.push_back(vc);
    cout << searchMatrix(V, 30) << endl;
    return 0;
}
