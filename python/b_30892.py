import sys
sys.stdin = open('input.txt')

n,k,t = map(int,input().split())

arr = list(map(int,input().split()))

arr.sort()

for _ in range(k):
    lst = []
    for i in range(len(arr)):
        if arr[i] < t:
           lst.append(arr[i])

        else:
            break
    if lst:
        t += max(lst)
    else:
        pass
print(t)


