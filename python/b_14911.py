import sys
sys.stdin = open('input.txt')

arr = list(map(int, input().split()))
num = int(input())

ans = set()

for i in range(len(arr)):
    for j in range(i + 1, len(arr)):
        total = arr[i] + arr[j]
        if total == num:
            ans.add((min(arr[i], arr[j]), max(arr[i], arr[j])))

ans = sorted(list(ans))

for i in ans:
    print(*i)
print(len(ans))
