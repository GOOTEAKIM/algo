import sys
sys.stdin = open('input.txt')

n = int(input())

arr = list(map(int,input().split()))
m = int(input())

low = 1
high = max(arr)

result = 0

while low <= high:
    mid = (low + high) // 2

    total = 0

    for i in arr:
        if i <= mid:
            total += i

        else:
            total += mid

    if total <= m:
        result = mid
        low = mid + 1

    else:
        high = mid - 1

print(result)