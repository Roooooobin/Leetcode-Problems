def isValid(s):
    map_pa = {'[': 1, ']': -1, '(': 2, ')': -2, '{': 3, '}': -3}
    stack = []
    for c in s:
        if len(stack) == 0 or map_pa[stack[-1]] + map_pa[c] != 0:
            stack.append(c)
        elif map_pa[stack[-1]] + map_pa[c] == 0:
            del stack[-1]  # stack.pop()
    print(stack)
    return not len(stack)

isValid("[({}){}(()])")




