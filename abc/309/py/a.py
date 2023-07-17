a, b = map(int,input().split())

if (abs(a-b)==1) and ((a-1)//3==(b-1)//3):
    print("Yes")
else:
    print("No")