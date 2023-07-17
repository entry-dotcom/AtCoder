n, k = map(int,input().split())

data = [list(map(int,input().split())) for i in range(n)]
data.sort(key=lambda x:x[0])
#print(data)
#ans = sum([data[i][1] for i in range(n)])
ans = sum(list(zip(*data))[1])

if ans <= k:
    print(1)
else:
    for i in range(n):
        ans -= data[i][1]
        if ans <= k:
            print(data[i][0]+1)
            exit()
        
    #print(data[n-1][0]+1)
    #exit()
    
