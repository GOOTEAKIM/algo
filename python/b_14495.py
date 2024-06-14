import sys
sys.stdin = open('input.txt')

n = int(input())

if n == 1 or n == 2 or n == 3:
    print(1)
elif n == 0:
    print(0)
else:
    a,b,c,d = 0,1,1,1
    for i in range(3,n+1):
        a,b,c,d = b,c,d, a+b+c

    print(c)
