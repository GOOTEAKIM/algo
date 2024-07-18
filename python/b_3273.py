import sys
sys.stdin = open('input.txt')

n = int(input())

arr = list(map(int,input().split()))

x = int(input())

seen = set()

cnt = 0

for i in arr:
    if (x-i) in seen:
        cnt += 1

    else:
        seen.add(i)

print(cnt)
