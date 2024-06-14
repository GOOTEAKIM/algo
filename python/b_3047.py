import sys
sys.stdin = open('input.txt')

arr = list(map(int, input().split()))
order = input()

arr.sort()

a = arr[0]
b = arr[1]
c = arr[2]

list = []

for i in order:
    if i == 'A':
        list.append(a)
    elif i == 'B':
        list.append(b)
    else:
        list.append(c)

print(*list)
