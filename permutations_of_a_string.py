def permute(s,l,r):
    if l==r:
        s=''.join(s)
        print(s)

    else:
        for i in range(l,r+1):
            s=list(s)
            s[l],s[i]=s[i],s[l]
            permute(s,l+1,r)
            s[l],s[i]=s[i],s[l]
            

s='abc'
permute(s,0,len(s)-1)
