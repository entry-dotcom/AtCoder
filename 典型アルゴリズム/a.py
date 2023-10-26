n, k = map(int,input().split())
a = list(map(int,input().split()))

left = 0; right = n-1; ans = -1

while(left<=right):
    mid = (left+right)//2
    print(left,right,mid)
    if a[mid] == k:
        ans = mid
        break
    if a[mid] > k:
        right = mid-1
        ans = mid
    if a[mid] < k:
        left = mid+1
        
print(ans)