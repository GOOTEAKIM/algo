import sys
sys.stdin = open('input.txt')

n = int(input())
arr = list(map(int,input().split()))

lst = []

for i in range(len(arr)):

    lst.append([i+1, arr[i]])
result = []

idx = 0

while lst:
    num, move = lst.pop(idx)
    result.append(num)

    if not lst:
        break

    if move > 0:
        idx = (idx + (move - 1)) % len(lst)
    else:
        idx = (idx + move) % len(lst)

print(*result)