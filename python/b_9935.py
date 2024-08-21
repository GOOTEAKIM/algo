import sys
sys.stdin = open('input.txt')

word = input()
explosion = input()

stack = []

for i in word:
    stack.append(i)

    if len(stack) >= len(explosion) and ''.join(stack[-len(explosion):]) == explosion:
        del stack[-len(explosion):]

result = ''.join(stack)

if not result:
    print('FRULA')

else:
    print(result)

