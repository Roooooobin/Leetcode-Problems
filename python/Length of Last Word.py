"""
# -*- coding: utf-8 -*-
# @FileName: Length of Last Word.py
# @Author  : Robin
# @Time    : 2019/6/15 8:53
"""
import re

class Solution:
    def lengthOfLastWord(self, s):
        words = s.split()
        if len(words) == 1:
            return 0
        else:
            return len(words[-1])


s = Solution()
print(s.lengthOfLastWord("hello   world wsss "))