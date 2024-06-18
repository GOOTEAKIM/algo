import sys
sys.stdin = open('input.txt')

n,m = map(int,input().split())

arr = list(map(int,input().split()))

final = [0]
tmp = 0

for a in arr:
    tmp += a
    final.append(tmp)

for _ in range(m):
    i, j = map(int,input().split())

    print(final[j] - final[i-1])