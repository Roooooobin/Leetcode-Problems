#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int interpolation_sort(int a[], int n, int x)
{
    int l = 0;
    int r = n-1;
    int mid;
    while(a[l] != a[r] && x <= a[r] && x >= a[l]){
        mid = l + (r-l)*(x-a[l])/(a[r]-a[l]);
        if(a[mid] < x){
            l = mid + 1;
        }
        else if(a[mid] > x){
            r = mid;
        }
        else return mid;
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 5, 5, 6, 7};
    cout << interpolation_sort(a, 7, 6) << endl;
    return 0;
}
