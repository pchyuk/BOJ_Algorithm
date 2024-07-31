a=[]
s=0
for i in range(5):
    a.append(0)
for i in range(5):
    b=int(input())
    a[i]=b
    if a[i]<40: a[i]=40
    s+=a[i]
print(s//5)