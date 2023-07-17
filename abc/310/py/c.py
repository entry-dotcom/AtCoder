n = int(input())
s = []
for i in range(n): s.append(input())
ans = 0
st = set()

for i in range(n):
    s_rv = s[i][::-1]
    if not s[i] in st and not s_rv in st:
        ans+=1
        st.add(s[i])
        st.add(s_rv)
    
print(ans)