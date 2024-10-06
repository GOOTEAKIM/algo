import sys
sys.stdin = open('input.txt')

a1, a0 = map(int,input().split())

c = int(input())
n0 = int(input())

n = n0

front = a1*n + a0
back = c*n

if front <= back and a1 <= c:
    print(1)
else:
    print(0)