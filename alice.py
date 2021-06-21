import math
import time
def isPrime(n):
    
    if n<=1:
        return False
    if n==2:
        return True
    if n>2 and n%2==0:
        return False

    max_div=math.floor(math.sqrt(n))
    for i in range(3,1+max_div,2):
        if n%i==0:
            return False
    return True

def returnFactors(x):
    l=[]
    i=2
    while i<=x//2:
        if len(l)==0:
            if x%i==0:
                l.append(i)

        if len(l)==1 and l[0]==2:
            if x%x//2==0:
                l.append(x//2)
                return l

        if len(l)==1:
            if x%i==0 and l[0]*i==x:
                l.append(i)

        if len(l)==2:
            return l

        i+=1
        

def f(x):
    if x==1:
        return 0

    elif isPrime(x):
        return 1

    else:
        l=returnFactors(x)
        first=l[0]
        second=l[1]
        return (second*f(first)+first*f(second))




def strange_sum (L, R):

    overallSum=0
    for i in range(L,R+1):
        # print('%d %d'%(i, f(i)))
        sum=0
        j=1
        while(j<=i):
            if i%j==0:
                sum+=f(j)
            j+=1
    
        overallSum+=sum

    return overallSum


T = int(input())
for _ in range(T):
    L, R = map(int, input().split())

    out_ = strange_sum(L, R)
    print (out_)