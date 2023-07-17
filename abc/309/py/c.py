n, k = map(int,input().split())
dict = {}
ans = 0


for i in range(n):
    key, val = map(int,input().split())
    dict[key] = val
    ans += val
dict = sorted(dict.items())
#dict.sort(key=lambda x:x[0])
print(dict[1][1])

if ans <= k:
    print(1)
else:
    for i in range(n):
        ans -= dict[i][1]
        if ans <= k:
            print(dict[i][0]+1)
            exit()
        
    #print(dict[n-1][0]+1)
    
