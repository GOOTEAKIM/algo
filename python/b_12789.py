import sys
sys.stdin = open('input.txt')

n = int(input())
arr = list(map(int,input().split()))

stack = []

turn = 1

for i in arr:
    stack.append(i)

    while stack and stack[-1] == turn:
        stack.pop()
        turn += 1

if stack:
    print("Sad")
else:
    print("Nice")
