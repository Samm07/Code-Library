n=3322251

l=[int(x) for x in str(n)]
    
newl=[]
for x in l:
    if x not in newl:
        newl.append(x)
        
string=''
for x in newl:
    string+=str(l.count(x))
    string+=str(x)

print(string)