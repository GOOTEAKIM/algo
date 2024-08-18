import sys
sys.stdin = open('input.txt')

n = int(input())

books = {}

for _ in range(n):
    a,b = input().split(".")

    if b not in books:
        books[b] = 1
    else:
        books[b] += 1

real = sorted(books)

for i in real:
    print(i, books[i])
