n=int(input())
a=[]
for i in range(n):
    a.append(input())
for i in range(n):
    print(i+1 ,". ", a[i], sep="")
