import sys
sys.stdin = open('input.txt')

n = int(input())

arr = list(map(int,input().split()))

final = [0]
tmp = 0

for k in arr:
    tmp += k
    final.append(tmp)

m = int(input())

for _ in range(m):
    i,j = map(int,input().split())
    print(final[j] - final[i-1])