"""
# -*- coding: utf-8 -*-
# @FileName: EOJ 3303.py
# @Author  : Robin
# @Time    : 2019/7/21 11:37
"""

case_num = int(input())

for k in range(case_num):
    a, b = map(int, input().split())
    res = a
    while res | (res+1) <= b:
        res |= (res+1)
    print("Case {}: {}".format(k, res))

