def balance(s):
    count=-1
    bal=0

    for i in range(len(s)):
        if s[i]=='0':
            bal-=1
        elif s[i]=='1':
            bal+=1

        if bal==0:
            count+=1

    return count+1

print(balance('0100110101'))
print(balance('0111100010'))