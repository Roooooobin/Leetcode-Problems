"""
# -*- coding: utf-8 -*-
# @FileName: Evaluate Reverse Polish Notation.py
# @Author  : Robin
# @Time    : 2019/6/22 15:03
"""

class Solution:
    def calc(self, operand1, operand2, op):
        if op == '+':
            return operand1 + operand2
        elif op == '-':
            return operand1 - operand2
        elif op == '*':
            return operand1 * operand2
        elif op == '/':
            return int(operand1 * 1.0 / operand2)
        else:
            return -1

    def evalRPN(self, tokens):
        ops = ['+', '-', '*', '/']
        stack = []
        for token in tokens:
            if token not in ops:
                stack.append(int(token))
            else:
                val = self.calc(stack[-2], stack[-1], token)
                stack.pop()
                stack.pop()
                stack.append(val)
        return stack[0]

