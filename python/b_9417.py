import sys
sys.stdin = open('input.txt')

import math

n = int(input())

for _ in range(n):
    arr = list(map(int,input().split()))
    result = 0
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            g = math.gcd(arr[i], arr[j])
            if g > result:
                result = g
            else:
                pass
    print(result)