"""
# -*- coding: utf-8 -*-
# @FileName: Plus One.py
# @Author  : Robin
# @Time    : 2019/6/13 12:17
"""

class Solution:
    def plusOne(self, digits):
        num = 0
        for i in range(len(digits)):
            num = num * 10 + digits[i] - 0
        return list(int(i) for i in str(num+1))


s = Solution()
print(s.plusOne([3, 9, 9]))