def rowWithMax1s(arr, n, m):
		
    dict={}
    for i in range(n):
        dict[i]=arr[i].count(1)
        
    MaxVal=0
    for key,value in dict.items():
        if value>MaxVal:
            # print('%d %d'%(key,value))
            MaxVal=value
            MaxKey=key

    return MaxKey        

arr=[[0,0,1,1],
     [0,1,1,1],
     [1,1,1,1],
     [0,0,0,1]]

print(rowWithMax1s(arr,4,4))
