def lps(pat, m):

    p=[0]*m
    i=0
    while i<=m:
        substring=pat[:i]
        l=len(substring)
        if(l==1):
            p[0]==0

        else:
            j=1
            while j<l:
                # print(substring[:j], end=' ')
                # print(substring[l-j:])
                if(substring[:j] == substring[l-j:]):
                    p[i-1]=len(substring[:j])
                j+=1

        i+=1
    return p


def matched(txt,pat):
    count=0
    
    for i in range(len(pat)+1):
        if txt[:i]==pat[:i]:
            count=len(txt[:i])

    return count


def kmp(txt, pat, p):

    n=len(txt)
    m=len(pat)

    i=0
    j=0

    found=[]

    while i<=(n-m):

        if txt[i]==pat[j]:
            count=matched(txt[i:], pat)

            if(count==len(pat)):
                found.append(i)


            shift=count-p[count-1]
            i+=shift

        else:
            i+=1

    return found


txt='AABAACAADAABAABA'
pat='AABA'

n=len(txt)
m=len(pat)

p=lps(pat,m)
found=kmp(txt,pat,p)
print(found)