t = int(input())
while(t):
    t -= 1
    num = input()
    digits = [int(i) for i in num]
    num = int(num)
    count = 0
    for i in digits:
        if i!=0 and num%i==0:
            count+=1
    
    print(count)