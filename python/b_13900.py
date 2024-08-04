import sys
sys.stdin = open('input.txt')

n = int(input())
arr = list(map(int,input().split()))

sum_arr = sum(arr)

result = 0

for i in arr:
    sum_arr -= i
    result += sum_arr * i

print(result)