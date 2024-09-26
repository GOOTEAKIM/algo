import sys
sys.stdin = open('input.txt')

n = int(input())

dp = [0] * 82

dp[0] = 0
dp[1] = 1

for i in range(2,len(dp)):
    dp[i] = dp[i-1] + dp[i-2]

print(2*(dp[n] + dp[n+1]))