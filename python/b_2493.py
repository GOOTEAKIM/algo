import sys
sys.stdin = open('input.txt')

n = int(input())

arr = list(map(int, input().split()))

arr = arr[::-1]

stack = []
lst = [0] * n

for i in range(n):
    while stack:
        if stack[-1][1] > arr[i]:
            lst[n - 1 - i] = n - stack[-1][0]
            break
        else:
            stack.pop()

    stack.append((i, arr[i]))

print(*lst)
