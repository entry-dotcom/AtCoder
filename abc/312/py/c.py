n, m = map(int,input().split())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

left = 0; right = 10**9+1

while(left+1<right):
    mid = (left+right)//2
    na = 0; nb = 0
    for i in range(n):
        if a[i] <= mid:
            na+=1
    for i in range(m):
        if b[i] >= mid:
            nb+=1
    if na >= nb: right = mid
    else: left = mid
    
print(right)