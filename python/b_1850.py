sys.stdin = open('input.txt')
import sys

import math

A, B = map(int, input().split())

D = math.gcd(A, B)

print('1' * D)


