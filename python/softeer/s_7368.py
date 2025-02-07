import sys
sys.stdin = open('input.txt')

n = int(input())

book = {}

arr= list(map(int,input().split()))

for i in range(n-1):
    diff = arr[i+1] - arr[i]
    if diff in book:
        book[diff] += 1
    else:
        book[diff] = 1

print(book[min(book)])
