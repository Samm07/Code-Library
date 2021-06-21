def substrings(s):
    l=[]
    for i in range(len(s)):
        for j in range(i+1,len(s)+1):
            l.append(s[i:j])

    return l

print(substrings('abc'))
print(substrings('abcd'))