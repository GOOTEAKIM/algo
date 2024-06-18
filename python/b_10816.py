import sys
sys.stdin = open('input.txt')

n = int(input())
arr_n = list(map(int,input().split()))

m = int(input())
arr_m = list(map(int,input().split()))

arr = {}

for i in arr_n:

    if i in arr:
        arr[i] += 1
    else:
        arr[i] = 1

for j in arr_m:

    if j in arr:
        print(arr[j], end=" ")
    else:
        print(0, end=" ")
