import sys
sys.stdin = open('input.txt')

import math

n = int(input())
arr = list(map(int,input().split()))

mother = arr[0]

arr = arr[1:]

for i in arr:
    g = math.gcd(mother,i)
    # print(g)
    print(f"{mother//g}/{i//g}")