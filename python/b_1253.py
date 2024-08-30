import sys
sys.stdin = open('input.txt')

n = int(input())

arr = list(map(int,input().split()))
arr.sort()

cnt = 0

for i in range(n):
    target = arr[i]
    start = 0
    end = n - 1

    while start < end:
        if start == i:
            start += 1
        elif end == i:
            end -= 1
        else:
            if arr[start] + arr[end] == target:
                cnt += 1
                break
            elif arr[start] + arr[end] < target:
                start +=1
            else:
                end -= 1

print(cnt)
