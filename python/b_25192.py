import sys
sys.stdin = open('input.txt')

n = int(input())

for _ in range(n):
    word = input()

    if word == "ENTER":
        book = {}
