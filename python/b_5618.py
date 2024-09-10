import sys
sys.stdin = open('input.txt')

from math import gcd

n = int(sys.stdin.readline())
arr = list(map(int,sys.stdin.readline().split()))

front = arr[0]

for i in range(1,len(arr)):
    front = gcd(front, arr[i])

lst = []
for i in range(1, front+1):
    if front % i == 0:
        print(i)
    else:
        pass