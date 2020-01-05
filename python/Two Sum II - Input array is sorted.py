"""
# -*- coding: utf-8 -*-
# @FileName: Two Sum II - Input array is sorted.py
# @Author  : Robin
# @Time    : 2019/6/9 17:06
"""

def twoSum(nums, target):
    n = len(nums)
    l = 0
    r = n-1
    while l < r:
        if nums[l] + nums[r] > target:
            r -= 1
        elif nums[l] + nums[r] < target:
            l += 1
        else:
            break
    ans = [l+1, r+1]
    return ans


print(twoSum([2, 7, 11, 15], 22))
