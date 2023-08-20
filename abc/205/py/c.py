a, b, c = map(int,input().split())

if c%2==1:
    if a<b:
        print("<")
        exit()
    if a>b:
        print(">")
        exit()
    if b==a:
        print("=")
        exit()

if c%2==0:
    if abs(a)<abs(b):
        print("<")
        exit()
    if abs(a)>abs(b):
        print(">")
        exit()
    if abs(a)==abs(b):
        print("=")
        exit()