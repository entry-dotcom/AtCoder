import queue
n, m = map(int,input().split())
graph = [[] for i in range(n)]

for i in range(m):
    a, b = map(int,input().split())
    graph[a-1].append(b-1)
    
ans = 0

for i in range(n):
    visit = [False]*n
    q = queue.Queue()
    visit[i] = True
    q.put(i)
    ans += 1
    while q.empty() == False:
        v = q.get()
        for _ in range(len(graph[v])):
            if visit[graph[v][_]]==False:
                q.put(graph[v][_])
                visit[graph[v][_]] = True
                ans += 1
                
print(ans)
                
        
    
    
    