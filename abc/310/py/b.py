n, m = map(int,input().split())
p, c, f = [], [], []


def check1 (pi, pj, fi, fj):
    return (pi >= pj) and (len(set(fi) & set(fj)) == len(fi))

def check2 (pi, pj, fi, fj):
    return pi > pj or (len(set(fi) | set(fj))==len(fj) and len(fj) > len(fi))
    
    
for _ in range(n):
    l = list(map(int,input().split()))
    p.append(l[0])
    c.append(l[1])
    f.append(l[2:])
    
for i in range(n):
    for j in range(n):
        if check1(p[i],p[j],f[i],f[j]) and check2(p[i],p[j],f[i],f[j]):
            print("Yes")
            exit()

print("No")