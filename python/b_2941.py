import sys
sys.stdin = open('input.txt')

word = input()

lst = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

for i in lst:
    word = word.replace(i, '*')

print(len(word))




