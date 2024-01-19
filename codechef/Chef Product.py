from math import *
for _ in range(int(input())):
    n = int(input())
    t = int(isqrt(n))
    x = t
    print((x >> 1) + (x & n & 1))
