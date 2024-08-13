import sys
sys.stdin = open('input.txt')

n = int(input())

lst = [0] * 36

lst[0] = 1

for i in range(1,n+1):
    for j in range(i):
        lst[i] += lst[j] * lst[i-j-1]

print(lst[n])

