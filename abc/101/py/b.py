n = int(input())
s_n = 0
n2 = n

while(n>0):
    s_n += n%10
    n //= 10

if n2%s_n==0: print("Yes")
else: print("No")