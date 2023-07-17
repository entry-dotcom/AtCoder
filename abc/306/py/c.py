n = int(input())
a = list(map(int,input().split()))
ans = []
d = {}

for i in range(3*n): d[a[i]] = 0

for i in range(3*n):
    d[a[i]]+=1
    if d[a[i]] == 2:
        ans.append(a[i])

for i in range(n):
    if i==n-1: print(ans[i])
    else: print(ans[i],end=" ")
    


