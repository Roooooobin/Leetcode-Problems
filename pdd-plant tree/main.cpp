/*
链接：https://www.nowcoder.com/questionTerminal/52f25c8a8d414f8f8fe46d4e62ef732c?orderByHotValue=1&page=1&onlyReference=false
来源：牛客网
DFS,需要判断不成立的情况下剪枝
如果M是奇数，则大于M+1的一半就不能种；如果M是偶数，则大于M的一半就不能种
*/
#include <bits/stdc++.h>
using namespace std;

int idx_max(int a[], int n)
{// 找出a中最大值的下标
    int idx = -1, t_max = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > t_max) {
            idx = i;
            t_max = a[i];
        }
    }
    return idx;
}
bool dfs(int a[], int b[], int n, int &m, int step)
{
    int idx = idx_max(a, n);
    if(idx == -1) return true;
    if(a[idx] * 2 > m + 1) return false; //剪枝
    if(a[idx] * 2 == m + 1) { //有上一句剪枝，可不用此步
        a[idx]--;
        m--;
        b[step] = idx + 1; //此情况只有一种正确选择
        if(dfs(a, b, n, m, step + 1)) return true;
        a[idx]++;
        m++;
    } else {
        for(int i = 0; i < n; i++) {
            if(a[i] > 0 && (step == 0 || b[step - 1] != i + 1)) {
                a[i]--;
                m--;
                b[step] = i + 1;
                if(dfs(a, b, n, m, step + 1)) return true;
                a[i]++;
                m++;
            }
        }
    }
    return false;
}

int main(void)
{
    //freopen("input.txt", "r", stdin);
    int n, m = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        m += a[i];
    }
    int b[m], t_sum = m;
    if(dfs(a, b, n, t_sum, 0)) {
        for (int i = 0; i < m; i++) {
            printf("%d ", b[i]);
        }
    } else printf("-");
    return 0;
}