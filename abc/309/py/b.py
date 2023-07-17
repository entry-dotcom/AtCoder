n = int(input())
a = []
for i in range(n):
    ai = list(map(str,input().split()))
    #list(map(int,input().split()))
    a.append(list(ai))

ans = a
print(ans)
for i in range(n):
    for j in range(n):
        if i==0:
            if j==0: ans[i][j] = a[i+1][j]
            else: ans[i][j+1] = a[i][j]
        if i==n-1:
            if j==n-1: ans[i][j] = a[i-1][j]
            else: ans[i][j] = a[i][j+1]
        if j==0:
            if i==n-1: ans[i][j] = a[i][j+1]
            else: ans[i][j] = a[i-1][j]
        if j==n-1:
            if i==0: ans[i][j] = a[i][j-1]
            else: ans[i][j] = a[i-1][j]

for i in range(n):
    print(ans[i])