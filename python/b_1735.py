import sys
sys.stdin = open('input.txt')

a1, a2 = map(int,input().split())
b1, b2 = map(int,input().split())

ja = a2 * b1 + a1 * b2
mo = a2 * b2

def gcd (x, y):
    while y:
        x, y = y, x % y
    return x

g = gcd(ja, mo)

ja //= g
mo //= g

print(ja, mo)