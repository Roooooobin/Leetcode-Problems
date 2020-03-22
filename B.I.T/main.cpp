#include <bits/stdc++.h>
using namespace std;

int a[10005];
int c[10005];
int n;

int lowbit(int x){
    return x&(-x);
}

int getSum(int x){
    int ans = 0;
    while(x > 0){
        ans += c[x];
        x -= lowbit(x);
    }
    return ans;
}

void update(int x, int value){
    a[x] += value;
    while(x <= n){
        c[x] += value;
        x += lowbit(x);
    }
}

int main(){
    while(scanf("%d", &n)!=EOF){    //用于测试n == 8
        memset(a, 0, sizeof(a));
        memset(c, 0, sizeof(c));
        for(int i = 1; i <= n; i++){
            scanf("%d", &a[i]);     //a[i]的值根据具体题目自己安排测试可以1，2，3，4，5，6，7，8
            update(i, a[i]);        //输入的过程就是更新的过程
        }
        int ans = getSum(n-1);      //用于测试输出n-1的前缀和 输出28
        printf("%d\n", ans);
        int pos, x;  // for updating
        for(int i=1; i<=n; ++i){
            cin >> pos >> x;
            a[pos] = x;
            update(pos, a[pos]);
            cout << getSum(n-1) << endl;
        }
    }
    return 0;
}