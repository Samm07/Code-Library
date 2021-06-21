def search_in_grid(grid, word, row, col, pos):

    if grid[row][col] != word[0]:
        return False

    R=len(grid)
    C=len(grid[0])


    for x,y in pos:

        rd=row+x
        cd=col+y
        status=True

        for k in range(1,len(word)):
            if 0<=rd<R and 0<=cd<C and word[k]==grid[rd][cd]:
                rd+=x
                cd+=y

            else:
                status=False
                break

        if status:
            return True

    return False




grid=["GEEKSFORGEEKS",
      "GEEKSQUIZGEEK",
      "IDEQAPRACTICE"]

word="GEEKS"

pos=[[-1,-1],[-1,0],[-1,1],
     [0,-1],[0,1],
     [1,-1],[1,0],[1,1]]

R=len(grid)
C=len(grid[0])

for row in range(R):
    for col in range(C):
        if search_in_grid(grid, word, row, col, pos):
            print("Pattern found at: %d %d"%(row,col))

