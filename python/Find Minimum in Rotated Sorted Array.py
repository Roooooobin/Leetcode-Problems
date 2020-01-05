"""
# -*- coding: utf-8 -*-
# @FileName: Find Minimum in Rotated Sorted Array.py
# @Author  : Robin
# @Time    : 2019/6/22 14:42
"""

class Solution:
    def findMin(self, nums):
        n = len(nums)
        if n == 1:
            return nums[0]
        l = 0
        r = n - 1
        if nums[r] > nums[0]:
            return nums[0]

        while l <= r:
            mid = l + (r - l) // 2
            if nums[mid] > nums[mid+1]:
                return nums[mid+1]
            elif nums[mid-1] > nums[mid]:
                return nums[mid]
            if nums[mid] > nums[0]:
                l = mid + 1
            else:
                r = mid - 1
