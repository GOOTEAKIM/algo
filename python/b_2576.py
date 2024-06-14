import sys
sys.stdin = open('input.txt')

arr = []

for _ in range(7):
    num = int(input())

    if num % 2 == 0:
        pass

    else:
        arr.append(num)

arr.sort()

if arr:
    print(sum(arr))
    print(arr[0])

else:
    print(-1)


