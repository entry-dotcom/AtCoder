n = int(input())
a = list(map(int,input().split()))
ans = 0

for i in range(7*n):
    ans += a[i]
    if ((i+1)%7==0 and i!=0):
        if i==7*n-1:
            print(ans)
        else: 
            print(ans,end=" ")
            ans = 0