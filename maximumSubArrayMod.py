def kadane(arr, m):
    maxSum = arr[0]
    runningSum = arr[0]
    for i in range(1, len(arr)):
        # ssSum = max(ssSum + arr[i], arr[i])
        runningSum = max(arr[i], arr[i]+runningSum) % m
        if runningSum > maxSum:
            maxSum = runningSum
    return maxSum

def main():
    t = int(input())
    while(t):
        t -= 1
        _, m = map(int,input().split())
        arr = list(map(int, input().split()))
        ms = kadane(arr,m) 
        print(ms)
        

if __name__ == "__main__":
    main()