def findHash(s,n):
    hash=0
    for x in s:
        hash+=d[x]

    return hash%n


def rabin_karp(string, pattern):

    patternHash=findHash(pattern,13) 
    m=len(string)
    n=len(pattern)

    for i in range(m-n):
        strHash=findHash(string[i:i+n],13)
        if strHash==patternHash:
            if string[i:i+n]==pattern:
                return i

    return -1

d={'a':1,'b':2, 'c':3,'d':4,'e':5,'f':6,'g':7,'h':8,'i':9,'j':10,'k':11,'l':12,'m':13,'n':14,'o':15,'p':16,'q':17,'r':18,'s':19,'t':20,'u':21,'v':22,'w':23,'x':24,'y':25,'z':26, ' ':27}
print(rabin_karp('jujutsu kaisen', 'tsu'))