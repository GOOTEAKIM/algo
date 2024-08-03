import sys
sys.stdin = open('input.txt')

from collections import deque

n = int(sys.stdin.readline())

queue = deque()

for _ in range(n):
    order = list(map(int, sys.stdin.readline().split()))

    if order[0] == 1:
        queue.appendleft(order[1])
    elif order[0] == 2:
        queue.append(order[1])
    elif order[0] == 3:
        if queue:
            num = queue.popleft()
            print(num)
        else:
            print(-1)
    elif order[0] == 4:
        if queue:
            num = queue.pop()
            print(num)
        else:
            print(-1)
    elif order[0] == 5:
        print(len(queue))
    elif order[0] == 6:
        if not queue:
            print(1)
        else:
            print(0)
    elif order[0] == 7:
        if queue:
            print(queue[0])
        else:
            print(-1)
    elif order[0] == 8:
        if queue:
            print(queue[-1])
        else:
            print(-1)
