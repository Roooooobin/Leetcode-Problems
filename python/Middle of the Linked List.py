"""
# -*- coding: utf-8 -*-
# @FileName: Middle of the Linked List.py
# @Author  : Robin
# @Time    : 2019/6/11 13:28
"""

class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def middleNode(self, head):
        if head is None and head.next is None:
            return head
        fast = head
        slow = head.next
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        return slow