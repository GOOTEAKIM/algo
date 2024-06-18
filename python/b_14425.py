import sys
sys.stdin = open('input.txt')

n,m = map(int,input().split())

S = []
for _ in range(n):
    word = input()
    S.append(word)

cnt = 0

for _ in range(m):
    check = input()
    if check in S:
        cnt += 1
    else:
        pass

print(cnt)

