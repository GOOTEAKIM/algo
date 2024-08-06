import sys
sys.stdin = open('input.txt')

t = int(input())

for _ in range(t):
    arr = list(map(int,input().split(",")))
    print(arr[0] + arr[-1])