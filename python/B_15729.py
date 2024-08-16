import sys
sys.stdin = open('input.txt')

import math

n = int(input())

for _ in range(n):
    r, g = map(int,input().split())

    lc = math.lcm(r,g)
    print(lc)
