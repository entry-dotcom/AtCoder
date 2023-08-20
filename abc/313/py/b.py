n, m = map(int,input().split())
a = b = []
s = [0]*n


for i in range(m):
    a_i, b_i = map(int,input().split())
    b_i-=1
    s[b_i]+=1

if s.count(0)==1: print(s.index(0)+1)
else: print(-1)