"""
# -*- coding: utf-8 -*-
# @FileName: Shifting Letters.py
# @Author  : Robin
# @Time    : 2019/6/15 9:09
"""

class Solution:
    def shiftingLetters(self, S, shifts):
        length = len(shifts)
        if length == 0: return S
        shift_sum = [shifts[-1]]
        for i in range(1, length):
            shift_sum.append(shift_sum[i-1] + shifts[length-i-1])
        ans = []
        for i in range(length):
            ans.append(chr((ord(S[i]) - 97 + shift_sum[length-i-1]) % 26 + 65))
        return ''.join(ans).lower()



s = Solution()
print(s.shiftingLetters("abc", [3, 5, 9]))