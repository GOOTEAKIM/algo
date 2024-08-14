import sys
sys.stdin = open('input.txt')

a, b = map(int,input().split())

def gcd(a,b):
    if a > b:
        while b:
            a,b = b, a%b
        return a
    else:
        while a:
            b,a = a, b%a
        return b

def lcm(a,b):
    if a > b:
        return abs(a * b) // gcd(a,b)
    else:
        return abs(a * b) // gcd(b,a)

result = lcm(a,b)

print(result)