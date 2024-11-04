import sys
sys.stdin = open('input.txt')

a,b = map(int,input().split())
n = int(input())

result = abs(a-b)

for _ in range(n):
    k = int(input())

    if result > abs(k-b):
        result = abs(k-b) + 1

print(result)



