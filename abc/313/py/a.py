n = int(input())
a = list(map(int,input().split()))
mx = -1

for i in range(1,n):
    if (mx<a[i]): mx = a[i]
    
print(max(0,mx-a[0]+1))