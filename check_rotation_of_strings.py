def checkRotations1(s1,s2):
    
    if len(s1)==len(s2):

        start=s2[0]
        index=s1.index(start)
        count=0

        for i in range(len(s2)):
            if s1[(index+i)%len(s1)]==s2[i]:
                count+=1

        if(count==len(s1)):
            return True
            
    return False

def checkRotations2(s1,s2):
    mega=s1+s1
    if s2 in mega:
        return True
    return False

print(checkRotations1('abcd','cdab'))
print(checkRotations2('abcd','cdab'))