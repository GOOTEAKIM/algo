import sys
sys.stdin = open("input.txt")

def solution(word):

    lst = []

    for i in word:

        if i == '(':
            lst.append(i)
        elif i == ")":
            if lst and lst[-1] == '(':
                lst.pop()
            else:
                lst.append(i)

    if not lst:
        return True
    else:
        return False

word = input()
print(solution(word))
