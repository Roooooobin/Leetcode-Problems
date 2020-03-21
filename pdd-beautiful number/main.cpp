/*
 A 国的手机号码由且仅由 N 位十进制数字(0-9)组成。一个手机号码中有至少 K 位数字相同则被定义为靓号。A 国的手机号可以有前导零，比如 000123456 是一个合法的手机号。
小多想花钱将自己的手机号码修改为一个靓号。修改号码中的一个数字需要花费的金额为新数字与旧数字之间的差值。比如将 1 修改为 6 或 6 修改为 1 都需要花 5 块钱。
给出小多现在的手机号码，问将其修改成一个靓号，最少需要多少钱？

 第一行包含2个整数 N、K，分别表示手机号码数字个数以及靓号至少有 K 个数字相同。
第二行包含 N 个字符，每个字符都是一个数字('0'-'9')，数字之间没有任何其他空白符。表示小多的手机号码。
数据范围：
2 <= K <= N <= 10000

 第一行包含一个整数，表示修改成一个靓号，最少需要的金额。
第二行包含 N 个数字字符，表示最少花费修改的新手机号。若有多个靓号花费都最少，则输出字典序最小的靓号

 链接：https://www.nowcoder.com/questionTerminal/005af31a10834b3688911463065ab47d?f=discussion
来源：牛客网
思路：依次遍历最后靓号的k个重复数为0-9，然后计算花费；
 因为要输出具体变化后的结果，所以需要考虑如何变化，如果要变化的值小于当前值，则从前往后替代，如果大于当前值，则从后往前替代（为了保证字典序最小）
 */


#include <bits/stdc++.h>

using namespace std;

char str[10010];
int a[10010];

struct node {
    int id;
    int num;
    int lf;
    int target;
    node(int id_, int num_, int lf_, int target_):id(id_), num(num_), lf(lf_), target(target_){}
    bool operator < (const node a) {
        if (num == a.num) {
            if (lf == a.lf) {
                if (target > lf) {
                    return id > a.id;
                } else {
                    return id < a.id;
                }
            }
            return lf > a.lf;
        }
        return num < a.num;
    }
};

int main() {
    int n, k;
    int len;
    int Min = INT_MAX;
    string ret = "";
    scanf("%d %d", &n, &k);
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len; i++) {
        a[i] = (str[i] - '0');
    }
    for (int num = 0; num <= 9; num++) {
        vector <node> vec;
        vec.clear();
        int cot = 0;
        int sum = 0;
        for (int i = 0; i < len; i++) {
            if (a[i] != num) {
                vec.push_back(node(i, abs(a[i] - num), a[i], num));
            } else {
                cot++;
            }
        }
        sort(vec.begin(), vec.end());
        for (int i = 0; i < k - cot; i++) {
            sum += vec[i].num;
        }
        if (sum < Min) {
            Min = sum;
            ret = str;
            for (int i = 0; i < k - cot; i++) {
                ret[vec[i].id] = (num + '0');
            }
        } else if (sum == Min) {
            string temp = str;
            for (int i = 0; i < k -cot; i++) {
                temp[vec[i].id] = (num + '0');
            }
            if (temp < ret) {
                ret = temp;
            }
        }
    }
    cout << Min << "\n";
    cout << ret << "\n";
    return 0;
}
