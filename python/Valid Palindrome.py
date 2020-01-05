"""
# -*- coding: utf-8 -*-
# @FileName: Valid Palindrome.py
# @Author  : Robin
# @Time    : 2019/7/27 10:07
"""


def isPalindrome(s):
    s_new = "".join([c for c in s if str.isalnum(c)]).lower()
    s_new_reverse = s_new[::-1]
    return s_new == s_new_reverse


print(isPalindrome("A man, a plaa a canal: Panama"))