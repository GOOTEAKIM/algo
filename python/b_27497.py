import sys
sys.stdin = open('input.txt')

from collections import deque

n = int(input())

stack = deque()
brr = []
for _ in range(n):

    arr = list(input().split())

    if arr[0] == "1":
        stack.append(arr[1])
        brr.append(1)
    elif arr[0] == "2":
        stack.appendleft(arr[1])
        brr.append(2)

    elif arr[0] == "3":
        if stack:
            if brr[-1] == 2:
                stack.popleft()
                brr.pop()
            elif brr[-1] == 1:
                stack.pop()
                brr.pop()
        else:
            pass
result = "".join(stack)

if not result:
    print(0)
else:
    print(result)

