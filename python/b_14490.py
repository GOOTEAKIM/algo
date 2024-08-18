import sys
sys.stdin = open('input.txt')

import math
n, m = map(int,input().split(":"))

gc = math.gcd(n,m)

print(f'{n//gc}:{m//gc}')