def sortedMatrix(N,Mat):

        
        list1=[]
        for row in Mat:
            for ele in row:
                list1.append(ele)

        list1.sort()
      
        
        sortedMatrix=[]
        index=0

        for q in range(N):
            sortedList=[]
            for p in range(N):
                sortedList.append(list1[index])
                index+=1
            sortedMatrix.append(sortedList)
            
        return sortedMatrix

Mat=[[10,20,30,40],
     [15,25,35,45], 
     [27,29,37,48], 
     [32,33,39,50]]

m=sortedMatrix(4, Mat)

for row in m:
    print(row)