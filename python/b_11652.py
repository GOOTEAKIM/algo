import sys
sys.stdin = open('input.txt')

n = int(input())

diction = {}

for _ in range(n):
    num = int(input())
    if num not in diction:
        diction[num] = 1
    else:
        diction[num] += 1

max_key = sorted(diction.items(), key=lambda x: (-x[1], x[0]))[0][0]

print(max_key)