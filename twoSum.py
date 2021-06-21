t = int(input())


while(t):
    t -= 1
    n = int(input())
    l = int(input())
    arr = list(map(int, input().split()))
    
    # initiate empty dictionary
    difDic = dict()
    # calculate the diff and store the index with dif as its key
    # signifes -> number at val index requires key more to form
    # the sum

    difDic[n-arr[0]] = 0
    for i in range(1,l):
        # If there exists an element that requires arr[i] more
        # to form the sum, then element at i and  at difDic[arr[i]]
        # can form the required sum
        if arr[i] in difDic:
            ans = sorted([difDic[arr[i]]+1, i+1])
            print(ans[0], ans[1])
            break

        # else add that there exist an elents which requires n-arr[i] to complete
        # the sum
        else:
            difDic[n - arr[i]] = i