"""
# -*- coding: utf-8 -*-
# @FileName: Ransom Note.py
# @Author  : Robin
# @Time    : 2019/6/11 13:40
"""

class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        return all(ransomNote.count(i) <= magazine.count(i) for i in set(ransomNote))