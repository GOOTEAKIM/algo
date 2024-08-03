import sys
sys.stdin = open('input.txt')

n = int(input())
cnt = 0
for _ in range(n):
    words = input()

    stack = []

    for i in words:
        if stack and stack[-1] == i:
            stack.pop()
        else:
            stack.append(i)

    if not stack:
        cnt += 1
    else:
        pass

print(cnt)




