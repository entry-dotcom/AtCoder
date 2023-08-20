n, d = map(int,input().split())
s = [input() for _ in range(n)]
ans = []
[ans.append(0) for _ in range(d+1)]

for i in range(d):
    check = True
    for j in range(n):
        if s[j][i] == 'x': check = False
    if check==True: ans[i+1] = ans[i]+1
    else: ans[i+1] = 0
   
print(max(ans))
        
