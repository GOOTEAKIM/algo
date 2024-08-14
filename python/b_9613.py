import sys
sys.stdin = open('input.txt')

t = int(input())

def gcd(x,y):
    if x > y:
        while y:
            x, y = y, x % y
        return x
    else:
        while x:
            y, x = x, y % x
        return y

for _ in range(t):
    arr = list(map(int,input().split()))
    n = arr[0]
    arr = arr[1:]
    cnt = 0
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if arr[i] < arr[j]:
                cnt += gcd(arr[i], arr[j])
            else:
                cnt += gcd(arr[j],arr[i])

    print(cnt)

