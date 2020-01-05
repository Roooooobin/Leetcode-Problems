"""
# -*- coding: utf-8 -*-
# @FileName: First Bad Version.py
# @Author  : Robin
# @Time    : 2019/6/9 17:20
"""

# def firstBadVersion(nums, n, target):
#     l = 0
#     r = n-1
#     while l < r:
#         mid = l + (r-l) // 2
#         if isBadVersion(mid):
#             l = mid + 1
#         else:
#             r = mid
#     return l

def firstBadVersion(nums, n, target):
    l = 0
    r = n-1
    while l < r:
        mid = l + (r-l) // 2
        if nums[mid] < target:
            l = mid + 1
        elif nums[mid] > target:
            r = mid
        else:
            return mid
    return l


print(firstBadVersion([1, 2, 5, 6, 14, 15], 6, 5))