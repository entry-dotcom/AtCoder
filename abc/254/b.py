N = int(input())
ans_list = [[1] * (i+1) for i in range(N)]
print(ans_list)
for i in range(N):
    for j in range(i+1):
        if j==0 or j==i:
            ans_list[i][j] = 1
        else:
            ans_list[i][j] = ans_list[i-1][j-1] + ans_list[i-1][j]
    
for i in range(N):
    print(*ans_list[i])