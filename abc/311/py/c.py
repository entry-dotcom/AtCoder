n = int(input())
a = list(map(int, input().split()))

now = 1
for _ in range(n):
    now = a[now-1]
    print(now,end=" ")
b = [now]

while(b[0]!=a[now-1]):
    now = a[now-1]
    b.append(now)

#print(len(b))
#print(*b)

    
    