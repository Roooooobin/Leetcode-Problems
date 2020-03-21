/*
 数三角形，只要不共线
 */
#include <bits/stdc++.h>
using namespace std;

struct cord{
    int x;
    int y;
};

int main() {
    int n;
    cin >> n;
    cord point[103];
    for(int i=0; i<n; ++i){
        cin >> point[i].x >> point[i].y;
    }
    long sum=0;
    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            for(int k=j+1; k<n; ++k){
                long a=(point[i].x-point[j].x) * (point[i].y-point[k].y);
                long b=(point[i].y-point[j].y) * (point[i].x-point[k].x);
                if(a != b){
                    sum++;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}
