#include <bits/stdc++.h>
using namespace std;

int findKthNumber(int m, int n, int k) {
    int l = 1, r = m * n;
    int cnt, mid, j;
    while(l < r){
        mid = (l+r) >> 1;
        cnt = 0;
        j = n-1;
        for(int i=0; i<m; i++){
            while(j >= 0 && mid < (i+1)*(j+1)) j--;
            cnt += j + 1;
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
    cout << findKthNumber(3, 3, 3) << endl;
    return 0;
}
