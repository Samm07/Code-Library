def kthSmallest(mat, k): 
    elements=[]
    for row in mat:
        for ele in row:
            elements.append(ele)
            
    elements.sort()
    
    return elements[k-1]
    
mat=[[2,5,1,6],
    [4,6,7,10],
    [20,21,24,6],
    [10,2,6,8]]

print(kthSmallest(mat,16))