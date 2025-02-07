n = int(input())

arr = list()

for _ in range(n):
    number = input().split('.')
    arr.append(number)

arr.sort(key= lambda x:[int (i) for i in x])

print("\n".join(".".join(item) for item in arr))
