import sys
sys.stdin = open('input.txt')

k,l = map(int,sys.stdin.readline().split())

book = {}
for i in range(l):
    num = input()
    book[num] = i

sorted_book = sorted(book.items(), key=lambda x: x[1])

for i in range(k):
    if i < len(sorted_book):
        print(sorted_book[i][0])
    else:
        break