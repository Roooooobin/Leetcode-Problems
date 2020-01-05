"""
# -*- coding: utf-8 -*-
# @FileName: Climbing Stairs.py
# @Author  : Robin
# @Time    : 2019/6/14 18:35
"""


def climbStairs(n):
    a = 1
    b = 1
    for i in range(n):
        a, b = b, a + b
        print(a, b)
    return a


print(climbStairs(1))