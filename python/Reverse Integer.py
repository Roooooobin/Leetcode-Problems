"""
# -*- coding: utf-8 -*-
# @FileName: Reverse Integer.py
# @Author  : Robin
# @Time    : 2019/11/12 19:14
"""


def reverse(x):
    flag = x > 0
    sign = 1 if flag else -1
    res = int(repr(sign * x)[::-1])
    return sign * res * (res < 2**31)


print(reverse(-123))
