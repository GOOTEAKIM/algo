import sys
sys.stdin = open('input.txt')

import math

A, B = map(int, input().split())

D = math.gcd(A, B)

print('1' * D)


