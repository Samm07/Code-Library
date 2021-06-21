def knapsack(arr, n, m):
    dp = [[0 for j in range(m+1)] for i in range(n)]
    
    for i in range(1,m+1):
        if i >= arr[0]:
            dp[0][i] = arr[0]


    for i in range(1,n):
        for j in range(1, m+1):
            if j < arr[i]:
                dp[i][j] = dp[i-1][j]
            
            else:
                dp[i][j] = max(arr[i], dp[i-1][j-arr[i]] + arr[i])
            
    for i in dp:
        print(i)
    return 0

def main():
    t = int(input())
    while(t):
        t -= 1
        n, m = map(int, input().split())
        arr = list(map(int, input().split()))
        print(knapsack(arr, n, m))

if __name__ == "__main__":
    main()