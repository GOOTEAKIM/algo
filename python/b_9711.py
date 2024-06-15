import sys
sys.stdin = open('input.txt')

T = int(input())

for i in range(1,T+1):
    p, q = map(int,input().split())

    if p == 1 or p == 2:
        print(1)
    else:
        a, b = 1, 1
        for j in range(3, p+1):
            a, b = b % q, (a+b) % q

        print(f"Case #{i}: {b}")