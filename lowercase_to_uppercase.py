def toUpper(s):

    upper=""
    for i in s:
        if i>='a' and i<='z':
            ch=ord(i)
            ch-=32
            i=chr(ch)

        upper+=i
    
    return upper


print(toUpper('asd'))