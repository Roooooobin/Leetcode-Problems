#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[103][103], b[103][103];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int dfs(int lx, int ly, int x, int y, int val){
    if(x < 0 || y < 0 || x >= n || y >= m){
        return -1;
    }
    if(a[x][y] >= val) return val;
    bool flag = true;
    for(int i=0; i<4; ++i){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx == lx && ny == ly) continue;
        if(dfs(x, y, nx, ny, val) != val){
            flag = false;
            break;
        }
    }
    if(flag){
        a[x][y] = val;
        return val;
    }
    else return -1;
}

int main() {
    cin >> n >> m;
    int max_height = 0;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin >> a[i][j];
            b[i][j] = a[i][j];
            max_height = max(max_height, a[i][j]);
        }
    }
    for(int x=2; x<=max_height; ++x){
        for(int i=1; i<n; ++i){
            for(int j=1; j<m; ++j){
                if(a[i][j] < x){
                    dfs(0, 0, i, j, x);
                }
            }
        }
    }
//    for(int i=0; i<n; ++i){
//        for(int j=0; j<m; ++j){
//            cout << a[i][j] << ' ';
//        }
//        cout << endl;
//    }
    int sum_ = 0;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            sum_ += a[i][j] - b[i][j];
        }
    }
    cout << sum_ << endl;
    return 0;
}
