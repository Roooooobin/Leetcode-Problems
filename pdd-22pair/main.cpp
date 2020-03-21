#include <bits/stdc++.h>
using namespace std;

/*
 给定一个长度为偶数的数组arr，将该数组中的数字两两配对并求和，在这些和中选出最大和最小值，请问该如何两两配对，才能让最大值和最小值的差值最小？

 一共2行输入。
第一行为一个整数n，2<=n<=10000, 第二行为n个数，组成目标数组，每个数大于等于2，小于等于100

 输出最小的差值。
 */

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    sort(a, a+n);
    vector<int> a2;
    for(int i=0; i+i<n; ++i){
        a2.push_back(a[i]+a[n-i-1]);
    }
    sort(a2.begin(), a2.end());
    cout << a2.back() - a2[0] << endl;
    return 0;
}
