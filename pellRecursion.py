def pell(n):
    if n==1:
        return 1
    if n==2:
        return 2
    return 2*pell(n-1)+pell(n-2)

print(pell(20))