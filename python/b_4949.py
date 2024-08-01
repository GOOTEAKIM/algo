import sys
sys.stdin = open('input.txt')

while True:
    sentence = input()

    if sentence == ".":
        break

    stack = []
    status = "yes"
    for i in sentence:
        if i == "(" or i == "[":
            stack.append(i)
        elif i == ")":
            if stack and stack[-1] == "(":
                stack.pop()
            else:
                status = "no"
                break
        elif i == "]":
            if stack and stack[-1] == "[":
                stack.pop()
            else:
                status = "no"
                break

    if stack:
        status = "no"

    print(status)


