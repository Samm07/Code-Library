A = "abcd"
B = "cdabcdab"

def minRepeats(A, B):
        
    status=-1
    count=1
    while(len(A)<len(B)):
        # print(B in A)
        if (B in A):
            status=1
            return count
        
        # print("here2")
        A=A+A
        count+=1
        # print(A)
  
    for i in range(3):
        # print('--')
        # print(A)
        # print(B)
        if B in A:
            status=1
            return count
        
        A=A+A
        count+=1
        
    if(status==-1):
        return -1

def minRepeats2(A,B):
    status=-1
    count=1
    while(len(A)<len(B)):
        if (B in A):
            status=1
            return count

        A=A+A
        count+=1
    
    for i in range(3):
        if B in A:
            status=1
            return count
        
        A=A+A
        count+=1
        
    if(status==-1):
        return -1


def minRepeats3(A,B):
    count=1
    status=-1
    print(A)
    print(B)
    while(B not in A):
        count+=1
        A=A+A
    
    return count


# print(minRepeats(A,B))
# print(minRepeats2(A,B))
print(minRepeats3(A,B))