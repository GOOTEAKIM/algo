import sys
sys.stdin = open('input.txt')

n,k = map(int,input().split())

arr = list(map(int,input().split()))

first = sorted(arr)

if arr == first:
    print('Yes')

else:
    for i in range(n-k):
        if arr[i] != first[i]:
            (arr[i], arr[i+k]) = (arr[i+k], arr[i])

    if arr == first:
        print('Yes')
    else:
        print('No')


