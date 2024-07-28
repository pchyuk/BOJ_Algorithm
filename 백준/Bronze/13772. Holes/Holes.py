n=int(input())
for _ in range(n):
    a=input()
    cnt=0
    for i in a:
        if i=='A' or i=='D'or i=='O' or i=='P' or i=='Q' or i=='R':
            cnt+=1
        elif i=='B':
            cnt+=2
        elif i=='C' or i=='E' or i=='F' or i=='G' or i=='H'or i=='i'or i=='j'or i=='K'or i=='L'or i=='M'or i=='N' or i=='S' or i=='T' or i=='U' or i=='V' or i=='W' or i=='X' or i=='Y' or i=='Z':
            cnt+=0
    print(cnt)