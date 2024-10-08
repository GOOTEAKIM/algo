import sys
sys.stdin = open('input.txt')

n = int(input())
arr = list(input().split())

books = {}

for i in range(65, 91):
    as_value = chr(i)
    books[as_value] = i

sheet = {}

for j in books:
    wow = books[j]

    sheet[wow] = j

lst = []

for i in range(n):
    for j in range(i+1, n):
        front = books[arr[i][0]]
        back = books[arr[j][1]]

        fr = books[arr[i][1]]
        bk = books[arr[j][0]]

        ans = max(front,back)
        ang = max(fr, bk)

        if ans not in lst:
            lst.append(ans)

        if ang not in lst:
            lst.append(ang)

print(len(lst))

for i in lst:
    print(sheet[i], end=' ')