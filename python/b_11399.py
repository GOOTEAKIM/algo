import sys
sys.stdin = open('input.txt')

n = int(input())
arr = list(map(int,input().split()))

arr.sort()

result = 0
total = 0

for i in arr:
    total += i
    result += total

print(result)
