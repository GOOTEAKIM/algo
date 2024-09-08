import sys
sys.stdin = open('input.txt')

n = int(input())

lst = []

for _ in range(n):
    time = list(map(int,input().split()))
    lst.append(time)

lst.sort()
# print(lst)

clock = 0

for i in lst:
    if i[0] > clock:
        clock = i[0]
        clock += i[1]
    else:
        clock += i[1]

print(clock)



