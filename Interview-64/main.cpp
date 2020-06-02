#include <bits/stdc++.h>
using namespace std;

// https://leetcode-cn.com/problems/qiu-12n-lcof/
// 力扣面试题64
/*
 * 求 1+2+...+n ，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
 */

// 利用&&运算的截断机制结束递归
int sumNums(int n) {
    n && (n += sumNums(n-1));
    return n;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
