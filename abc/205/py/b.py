n = int(input())
a = list(map(int,input().split()))

a_map = list(range(n))

for i in range(n):
    if a.count(i+1)==0: 
        print("No")
        exit()
    
print("Yes")