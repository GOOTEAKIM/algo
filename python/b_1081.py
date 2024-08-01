import sys
sys.stdin = open('input.txt')

l, u = map(int,input().split())

cnt = 0
for i in range(l,u+1):
    arr = list(str(i))
    hop = 0
    for j in arr:
        hop += int(j)

    cnt += hop

print(cnt)
