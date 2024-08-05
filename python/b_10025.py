import sys
sys.stdin = open('input.txt')

n, k = map(int,input().split())

arr = [0] * 1000001

for _ in range(n):
    g,x = map(int,input().split())
    arr[x] = g

window = sum(arr[:2*k+1])

total = window

for i in range(1, 1000001 - 2 * k):
    window = window - arr[i-1] + arr[i+2*k]

    if window > total:
        total = window

print(total)


