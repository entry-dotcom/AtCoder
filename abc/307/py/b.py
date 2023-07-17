n = int(input())
s = []

for i in range(n): s.append(input())


for i in range(n):
    for j in range(i+1,n):
        s1 = s[i]+s[j]
        s2 = s[j]+s[i]
        check1 = check2 = True
        for k in range(len(s1)//2):
            if s1[k] != s1[-(k+1)]:
                check1 = False
            if s2[k] != s2[-(k+1)]:
                check2 = False
        if (check1 == True or check2 == True):
            print("Yes")
            exit()
            
    
print("No") 