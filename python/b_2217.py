import sys
sys.stdin = open('input.txt')

n = int(input())

lst = []
for _ in range(n):
    weight = int(input())
    lst.append(weight)

lst.sort()

ans = []

for i in lst:
    ans.append(i*n)
    n -= 1

print(max(ans))

