n=int(input())
a=[0]*n
for i in range(0,n):
    a[i]=int(input())
for i in range(0,n):
    for j in range(0,a[i]):
        print("=", end="")
    print("\n", end="")
    