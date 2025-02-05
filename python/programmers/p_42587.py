from collections import deque


def solution(priorities, location) :

    queue = deque()

    for i in range(len(priorities)):
        queue.append((priorities[i],i))

    ans = 0

    while queue:

        current = queue.popleft()

        if any(current[0] < item[0] for item in queue):
            queue.append(current)

        else:
            ans+=1

            if current[1] == location:
                return  ans

