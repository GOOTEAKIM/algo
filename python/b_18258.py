import sys
sys.stdin = open('input.txt')

from collections import deque

n = int(sys.stdin.readline())

lst = deque()

for _ in range(n):
    arr = list(sys.stdin.readline().split())

    if arr[0] == 'push':
        lst.append(arr[1])

    elif arr[0] == 'pop':
        if lst:
            oh = lst.popleft()
            print(oh)
        else:
            print(-1)

    elif arr[0] == 'size':
        print(len(lst))

    elif arr[0] == 'empty':
        if lst:
            print(0)
        else:
            print(1)

    elif arr[0] == 'front':
        if lst:
            print(lst[0])
        else:
            print(-1)

    elif arr[0] == 'back':
        if lst:
            print(lst[-1])
        else:
            print(-1)
