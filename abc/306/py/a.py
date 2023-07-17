n = int(input())
s = input()

for i in range(n):
    print(s[i]+s[i],end="")
    if i==n-1:print("")