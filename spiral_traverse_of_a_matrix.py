def spiral_matrix(n,m,mat):
    top=0
    bottom=n
    left=0
    right=m

    dir=0

    while(top<=bottom and left<=right):

        if(dir==0):
            i=left
            while(i<=right):
                print(mat[top][i], end=' ')
                i+=1
            top+=1

        elif(dir==1):
            i=top
            while(i<=bottom):
                print(mat[i][right],end=' ')
                i+=1
            right-=1

        elif(dir==2):
            i=right
            while(i>=left):
                print(mat[bottom][i], end=' ')
                i-=1
            bottom-=1

        else:
            i=bottom
            while(i>=top):
                print(mat[i][left], end=' ')
                i-=1
            left+=1

        dir=(dir+1)%4

mat=[[1,2,3,4],
    [5,6,7,8],
    [9,10,11,12],
    [13,14,15,16],
    [17,18,19,20]]

n=5
m=4

spiral_matrix(n-1,m-1,mat)