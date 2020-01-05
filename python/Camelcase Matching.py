"""
# -*- coding: utf-8 -*-
# @FileName: Camelcase Matching.py
# @Author  : Robin
# @Time    : 2019/11/12 16:24
"""

import re


def camelMatch(queries, pattern):
    lower_ptn = ["[a-z]*"]
    pattern_list = list(pattern)
    i = 0
    len_ = len(pattern_list)
    while i < len_:
        # if 'A' <= pattern_list[i] <= 'Z':
        pattern_list[i:i] = lower_ptn
        i += 1
        len_ += 1
        i += 1
    pattern_list.extend(lower_ptn)
    pattern = ''.join(pattern_list)
    ptn = re.compile(pattern)
    ans = []
    for q in queries:
        match_obj = ptn.match(q)
        if match_obj and match_obj.end() == len(q):
            ans.append(True)
        else:
            ans.append(False)
    return ans


# res = camelMatch(["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"], "FoBaT")
res = camelMatch(["CompetitiveProgramming","CounterPick","ControlPanel"], "CooP")
print(res)
# queries = ["RooBoo", "RoRB", "ROBOO", "RobbBooin"]
# ptn = re.compile("[a-z]*R[a-z]*Bo[a-z]*")
#
#
# for q in queries:
#     if ptn.match(q):
#         print(True)
#     else:
#         print(False)

