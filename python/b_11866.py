import sys
sys.stdin = open('input.txt')

n, k = map(int,input().split())

arr = list(range(1,n+1))
lst = [arr[k-1]]

for i in range(1,n+1):
    score = arr.pop(arr[i*k + k])
    lst.append(score)

1 2 3 4 5 6 7
1 2 4 5 6 7
1 2 4 5 7
1 4 5 7

3
3 6
3 6 2