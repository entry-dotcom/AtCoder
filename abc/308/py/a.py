a = list(map(int,input().split()))
check = True

for i in range(len(a)-1):
    if a[i+1] < a[i]: check = False
    
for i in range(len(a)):
    if (not (a[i] >= 100 and a[i] <= 675)): check = False
    if (not (a[i]%25==0)): check = False

if check == True: print("Yes")
else: print("No")
    