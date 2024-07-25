import sys
sys.stdin = open('input.txt')

s = input()

rev_s = s[::-1]
lst = []

word = ""
for i in rev_s:
    word += i
    lst.append(word[::-1])

lst.sort()

print(*lst,sep="\n")
