def maxRes(n):
    res = [0 for _ in range(n+1)]
    res[0] = 0
    res[1] = 0

    for i in range(2,n+1):
        for j in range(1, i//2+1):
            res[i] = max(res[i], j*(i-j), j*res[i-j])

    return res[n]

def main():
    n = int(input())

    print(maxRes(n))

if __name__ == "__main__":
    main()

