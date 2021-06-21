def commonInAllRows(mat,n,m):

    mp=dict()

    for i in range(m):
        mp[mat[0][i]]=1

    for i in range(1,n):
        for j in range(m):

            if(mat[i][j] in mp.keys() and mp[mat[i][j]]==i):
                mp[mat[i][j]]=i+1

                if i==n-1:
                    print(mat[i][j], end=' ')



mat=[[2,5,1,6,7],
    [4,6,7,10,7],
    [20,21,24,6,7],
    [10,2,6,8,7]]

commonInAllRows(mat,4,5)
# print(commonInAllRows(mat,4,5))