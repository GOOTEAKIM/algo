import sys
sys.stdin = open('input.txt')

n = int(input())

arr = {}

for _ in range(n):
    word = input()

    if word in arr:
        arr[word] += 1

    else:
        arr[word] = 1

max_count = max(arr.values())

result = min(word for word in arr if arr[word] == max_count)

print(result)