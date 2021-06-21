def getSumPair(arr, target):
    start = 0
    end = len(arr)-1
    while(start!=end):
        s = arr[start] + arr[end]
        if(s == target):
            return (start, end)
        elif(s<target):
            start += 1
        else:
            end -= 1

def main():
    arr = [-2, 1, 2, 4, 7, 11]
    target = 13
    print(getSumPair(arr, target))

if __name__ == "__main__":
    main()