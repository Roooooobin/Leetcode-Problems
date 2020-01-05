"""
# -*- coding: utf-8 -*-
# @FileName: Longest Common Prefix.py
# @Author  : Robin
# @Time    : 2019/7/27 9:42
"""


def longestCommonPrefix(strs):
    if not strs:
        return ""
    max_prefix = min(strs, key=len)
    for i, ch in enumerate(max_prefix):
        for other in strs:
            if other[i] != ch:
                return max_prefix[:i]
    return max_prefix


print(longestCommonPrefix(["flight", "fll", "fllii"]))
