import sys
sys.stdin = open('input.txt')

from collections import deque

N = int(input())

d = deque()
rest = []
for i in range(1,N+1):
    d.append(i)


while len(d) > 0:
    odd = d.popleft()
    rest.append(odd)

    if len(d) != 0:
        d.append(d.popleft())

print(*rest)