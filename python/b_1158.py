import sys
sys.stdin = open('input.txt')

n, k = map(int,input().split())

arr = list(range(1,n+1))

result = []

index = 0

while arr:
    index = (index + k - 1) % len(arr)
    result.append(arr.pop(index))

print("<" + ", ".join(map(str,result)) + ">")


