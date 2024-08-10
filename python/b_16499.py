import sys
sys.stdin = open('input.txt')

n = int(input())

books = []
for _ in range(n):
    word = input()

    word_s = sorted(word)

    if word_s not in books:
        books.append(word_s)
    else:
        pass

print(len(books))
