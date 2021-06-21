def rotate_without_extra_space(mat,n):

    for i in range(n):
        for j in range(i,n):
            mat[i][j], mat[j][i]=mat[j][i],mat[i][j]


    for i in range(n):
        mat[i][0],mat[i][n-1]=mat[i][n-1],mat[i][0]

    for row in mat:
        print(row)


mat=[[1,2,3,10],
     [4,5,6,11],
     [7,8,9,12],
     [13,14,15,16]]

a=2
b=3
a,b=b,a
print(a)
print(b)

rotate_without_extra_space(mat,len(mat))