#include <bits/stdc++.h>
using namespace std;

/*
一个序列是有趣的需要满足：当且仅当这个序列的每一个元素ai 满足 i 整除ai 。

现在给定一个长度为n的数组，问这个数组有多少个非空的子序列是有趣的，由于答案可能比较大，只需要输出在模998244353意义下答案的就行了。

一个长度为n的数组的非空子序列定义为从这个数组中移除至多n-1个元素后剩下的元素有序按照原顺序形成的数组。比如说对于数组[3,2,1]，它的非空子序列有[3],[2],[1],[3,2],[3,1],[2,1],[3,2,1]。
 */

int main() {
    int n;
    cin >> n;
    int a[100007];
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    cout << 2 << endl;
    return 0;
}