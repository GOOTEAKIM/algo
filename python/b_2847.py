import sys
sys.stdin = open('input.txt')

n = int(input())

lst = []
for _ in range(n):
    score = int(input())
    lst.append(score)

lst = lst[::-1]

start = 0
cnt = 0
for i in range(n-1):
    start = lst[i]
    if lst[i+1] >= lst[i]:
       spec = lst[i+1] - lst[i] + 1
       cnt += spec
       lst[i+1] -= spec

print(cnt)
