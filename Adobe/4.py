def equalPartition(n, arr):
    summ = sum(arr)
    if summ%2 == 1:
        return 0
    
    else:
        dp = [[0]*(summ + 1) for i in range(n + 1)]
        for i in range(n + 1):
            dp[i][0] = 1
        for i in range(n + 1):
            for j in range(summ + 1):
                if arr[i - 1] <= j:
                    dp[i][j] = dp[i - 1][j] | dp[i - 1][j - arr[i - 1]]
                else:
                    dp[i][j] = dp[i - 1][j]
            
        return dp[n][summ]


arr = [2, 2, 1, 2, 2]
n = len(arr)
if (equalPartition(n, arr) == 1):
    print("YES")
else:
    print("NO")