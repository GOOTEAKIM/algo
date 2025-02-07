import sys
sys.stdin = open('input.txt')

n = int(input())
arr = list(map(int,input().split()))

lst = []

for i in range(n-1):
    for j in range(i+1, n):

        lst.append(arr[i]*arr[j])

print(max(lst))