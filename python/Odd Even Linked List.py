"""
# -*- coding: utf-8 -*-
# @FileName: Odd Even Linked List.py
# @Author  : Robin
# @Time    : 2019/6/10 22:23
"""

class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def oddEvenList(self, head):
        if head is None or head.next is None:
            return head
        oddList = head
        evenList = head.next
        even = evenList
        while evenList and evenList.next:
            oddList.next = evenList.next
            oddList = oddList.next
            evenList.next = oddList.next
            evenList = evenList.next
        oddList.next = even
        return head