import sys
sys.stdin = open('input.txt')

m, n = map(int,input().split())
cnt = 0


def conversion(a, b):
    c= "0123456789ABCDEF"

    if a < b:
        return str(c[a])

    else:
        return conversion(a//b, b) + str(c[a % b])


print(conversion(m, n))

