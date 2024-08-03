import sys
sys.stdin = open('input.txt')

n = int(input())

lst = []
total = 0
count = dict()
for _ in range(n):
    num = int(input())
    lst.append(num)
    total += num
    if num not in count:
        count[num] = 1
    else:
        count[num] += 1

lst.sort()

freq = max(count.values())

many = []
for key, value in count.items():
    if value == freq:
        many.append(key)

many.sort()

print(int(round(total / n,0)))
print(lst[n//2])

if len(many) == 1:
    print(many[0])

else:
    print(many[1])

print(lst[-1]-lst[0])

