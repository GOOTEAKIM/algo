import sys
sys.stdin = open('input.txt')

n = int(input())

arr = list(input().split())

chart = dict()

for i in arr:

    if i not in chart:
        chart[i] = 0

for _ in range(n):
    lst = list(input().split())

    for i in lst:
        chart[i] += 1

final = sorted(chart.items(), key=lambda x : x[1], reverse=True)

for i in final:
    print(*i)
