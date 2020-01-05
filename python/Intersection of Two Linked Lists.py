"""
# -*- coding: utf-8 -*-
# @FileName: Intersection of Two Linked Lists.py
# @Author  : Robin
# @Time    : 2019/6/9 20:45
"""

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        pA = headA
        pB = headB

        while pA != pB:
            pA = pA.next if pA is not None else headB
            pB = pB.next if pB is not None else headA

        return pA