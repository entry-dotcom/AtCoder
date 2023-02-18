list_integer = list(map(int, input().split()))

if ((list_integer[0] <= list_integer[1] & list_integer[1] <= list_integer[2]) | (list_integer[2] <= list_integer[1] & list_integer[1] <= list_integer[0])):
    print("Yes")
else:
    print("No")