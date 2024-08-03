import sys
sys.stdin = open('input.txt')

n = int(input())

lst = [0]

for _ in range(n):
    stair = int(input())
    lst.append(stair)

if n < 2:
    print(lst[n])

else:
    dp = [0] * (n+1)
    dp[1] = lst[1]
    dp[2] = dp[1] + lst[2]

    for i in range(3, n+1):
        dp[i] = max(dp[i-2], dp[i-3] + lst[i-1]) + lst[i]

    print(dp[n])