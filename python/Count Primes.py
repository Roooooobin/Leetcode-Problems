"""
# -*- coding: utf-8 -*-
# @FileName: Count Primes.py
# @Author  : Robin
# @Time    : 2019/6/9 17:44
"""

class Solution(object):

    def isPrime(self, x):
        for i in range(2, x+1):
            if x % i == 0:
                return True
        return False

    def countPrimes(self, n):
        Map = dict(zip(range(2, n), [1]*(n-2)))
        for x in range(2, int(n ** 0.5) + 1):
            if Map[x]:
                if self.isPrime(x):
                    a = 2
                    while x * a < n:
                        Map[x * a] = 0
                        a += 1
        return len([x for x in Map.keys() if Map[x] == 1])


s = Solution()
primes = s.countPrimes(20)
print(primes)
