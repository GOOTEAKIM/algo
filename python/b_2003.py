import sys
sys.stdin = open('input.txt')

n,m = map(int,input().split())

arr = list(map(int,input().split()))

cnt = 0

start = 0
end = 0

for i in range(n-m+1):
    start = i
    end = i+m-1

    arr = arr[start:end]

    print(start,end)
    print(arr)


