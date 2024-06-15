import sys
sys.stdin = open('input.txt')

N = int(input())

arr = [0] * 10001

for i in range(1,N+1):

    num = int(input())

    arr[num] += 1

for i in range(len(arr)):
    if arr[i] != 0:
        for _ in range(arr[i]):
            print(i)