n = int(input())
s = input()

A, B, C = False, False, False

for i in range(len(s)):
    if s[i] == 'A': A = True
    if s[i] == 'B': B = True
    if s[i] == 'C': C = True
    if A == B == C == True:
        print(i+1)
        exit()