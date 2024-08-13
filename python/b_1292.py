import sys
sys.stdin = open('input.txt')

a,b = map(int,input().split())

arr = [0]

for i in range(46):
    for j in range(i):
        arr.append(i)

print(sum(arr[a:b+1]))
