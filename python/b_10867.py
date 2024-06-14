import sys
sys.stdin = open('input.txt')

N = int(input())

arr = list(map(int,input().split()))

arr.sort()

arr2 = []

for i in arr:
    if i not in arr2:
        arr2.append(i)
    else:
        pass

print(*arr2)