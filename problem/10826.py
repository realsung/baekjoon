from sys import stdin
n=int(stdin.readline())
dp = [0] * 10001
dp[0] = 0
dp[1] = 1
for i in range(2,10001):
    dp[i] = dp[i-1] + dp[i-2]
print(dp[n])