def toLower(s):
    lower=""
    for i in s:

        if i>='A' and i<='Z':
            chlow=ord(i)            # Convert to ASCII
            chlow+=32               # Add 32
            i=chr(chlow)        # Convert to string

        lower+=i

    return lower


print(ord('A'))
print(toLower('ABCcasd'))