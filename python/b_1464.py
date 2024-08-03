import sys
sys.stdin = open('input.txt')

s = input()
lst = []
for i in s:
    lst.append(i)
lst.sort()
result = "".join(lst)
print(result)


