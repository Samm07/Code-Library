def main():
    num = input()

    res = 0
    multiplier = int('1'*len(num))
    place = 1

    for n in num:
        res += (int(n)*place*multiplier) % (10**9+7)
        place += 1
        multiplier //= 10

    print(res)


if __name__ == "__main__":
    main()
