import sys
sys.stdin = open('input.txt')

n,m = map(int,input().split())
arr = list(map(int,input().split()))

first = sum(arr[:m])
result = first

for i in range(n-m):

    first = first - arr[i] + arr[i+m]

    if first > result:
        result = first

print(result)