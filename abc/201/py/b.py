n = int(input())
s_t = []

for i in range(n):
    s_i, t_i = input().split()
    s_t.append([int(t_i),s_i])
    
s_t.sort()
print(s_t[n-2][1])