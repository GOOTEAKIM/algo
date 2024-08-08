import sys
sys.stdin = open('input.txt')

n = int(input())

end = 0
sum = 0
cnt = 0

for i in range(0,n):
    while sum < n and end < n:
        sum += end + 1
        end += 1
    if sum == n:
        cnt += 1

    sum -= i + 1

print(cnt)
