import sys
sys.stdin = open('input.txt')

n = int(input())

arr = list(map(int,input().split()))

lst = [1] * n

for i in range(n):
    for j in range(i):
        if arr[i] < arr[j]:
            lst[i] = max(lst[i], lst[j] + 1)

print(max(lst))