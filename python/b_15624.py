import sys
sys.stdin = open('input.txt')

n = int(input())

if n == 0:
    print(0)
elif n == 1 or n == 2:
    print(1)
else:
    a, b = 1, 1
    for i in range(3, n+1):
        a, b = b, (a+b) % 1000000007

    print(b)