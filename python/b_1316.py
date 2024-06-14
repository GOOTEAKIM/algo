import sys
sys.stdin = open('input.txt')

N = int(input())

final = 0
for _ in range(N):
    word = input()
    arr = []
    answer = True
    for i in word:
        if i not in arr:
            arr.append(i)

        else:
            if i == arr[-1]:
                answer = True
            else:
                answer = False
                break

    if answer:
        final += 1
    else:
        pass

print(final)