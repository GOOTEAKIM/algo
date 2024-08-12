import sys
sys.stdin = open('input.txt')

n = int(sys.stdin.readline())
lst = []
for _ in range(n):
    number = int(sys.stdin.readline())
    lst.append(number)

lst.sort()

def ban(n):
    if n - int(n) >= 0.5:
        return int(n) + 1
    else:
        return int(n)

if n:
    num = ban(n * 0.15)

    lst = lst[num:n-num]

    print(ban(sum(lst) / len(lst)))

else:
    print(0)