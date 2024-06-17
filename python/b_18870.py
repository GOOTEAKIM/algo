import sys
sys.stdin = open('input.txt')

N = int(input())

arr = list(map(int,input().split()))

arr_set = set(arr)

after = list(arr_set)

after.sort()

dict = {}

for i in range(len(after)):
    dict[after[i]] = i

for i in arr:
    print(dict[i], end=" ")

