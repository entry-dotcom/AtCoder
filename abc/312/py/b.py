n, m = map(int,input().split())
s = list([input() for _ in range(n)])

for i in range(n):
    for j in range(m):
        if s[i][j] == '#' and i+8<=n-1 and j+8<=m-1:
            check = True
            #　左上の確認
            for ni in range(4):
                for nj in range(4):
                    if ni==3 or nj==3:
                        if s[i+ni][j+nj] != '.': check = False
                    else:
                        if s[i+ni][j+nj] != '#': check = False
            #　右下の確認
            for ni in range(4):
                for nj in range(4):
                    if ni==0 or nj==0:
                        if s[i+ni+5][j+nj+5] != '.': check = False
                    else:
                        if s[i+ni+5][j+nj+5] != '#': check = False
            if check==True: print(i+1,j+1)
            
                    