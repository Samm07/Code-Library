def kadane(arr):
    ssSum = arr[0]
    maxSum = arr[0]
    runningSum = arr[0]
    for i in range(1, len(arr)):
        ssSum = max(arr[i], ssSum+(arr[i] if arr[i]>0 else 0))
        # ssSum = max(ssSum + arr[i], arr[i])
        runningSum = max(arr[i], arr[i]+runningSum)
        if runningSum > maxSum:
            maxSum = runningSum
    return maxSum, ssSum

def main():
    global aSum
    t = int(input())
    while(t):
        t -= 1
        aSum = float('-inf')
        _ = int(input())
        arr = list(map(int, input().split()))
        ms, ss = kadane(arr) 
        print(f"{ms} {ss}")
        

if __name__ == "__main__":
    main()