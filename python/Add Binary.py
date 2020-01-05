"""
# -*- coding: utf-8 -*-
# @FileName: Add Binary.py
# @Author  : Robin
# @Time    : 2019/6/13 12:22
"""


class Solution:
    def addBinary(self, a, b):
        return bin(int(a, 2)+int(b, 2))[2:]
