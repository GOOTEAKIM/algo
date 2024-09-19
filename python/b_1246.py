import sys
sys.stdin = open('input.txt')

n, m = map(int,input().split())

lst = []
for _ in range(m):
    p = int(input())
    lst.append(p)

lst.sort()

book = []

best_price = 0
total = 0

for i in range(len(lst)):
    price = lst[i]

    eggs_to_sell = min(n, len(lst)-i)
    profit = price * eggs_to_sell

    if profit > total:
        total = profit
        best_price = price

print(best_price, total)

