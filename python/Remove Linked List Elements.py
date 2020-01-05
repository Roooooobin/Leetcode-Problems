"""
# -*- coding: utf-8 -*-
# @FileName: Remove Linked List Elements.py
# @Author  : Robin
# @Time    : 2019/6/10 15:22
"""

class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def removeElements(self, head, val):
        ans = l = ListNode(0)
        while head:
            if head.val != val:
                l.next = head
                l = l.next
            head = head.next
        l.next = None
        return ans.next


class Solution2(object):
    def removeElements(self, head, val):
        while head and head.val == val:
            head = head.next
        cur = head
        while cur and cur.next:
            if cur.next.val == val:
                cur.next = cur.next.next
            else:
                cur = cur.next
        return head


