import sys
sys.stdin = open('input.txt')

sys.stdin.readline()
n = int(input())

lst = []
for _ in range(n):
    num = int(input())
    lst.append(num)

lst.sort(reverse=True)

for i in lst:
    print(i)