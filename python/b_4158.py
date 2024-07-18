import sys
sys.stdin = open('input.txt')

sys.stdin.readline()

while True:
    n,m = map(int,input().split())

    if n == 0 and m == 0:
        break

    san = set()
    sun = set()

    for _ in range(n):
        a = int(input())
        san.add(a)

    for _ in range(m):
        b = int(input())
        sun.add(b)

    print(len(san & sun))