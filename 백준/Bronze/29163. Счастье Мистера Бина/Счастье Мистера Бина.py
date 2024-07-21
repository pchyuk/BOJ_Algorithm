n=int(input())
a=list(map(int, input().split()))
odd=0
even=0
for i in range(0,n):
    if a[i]%2==1: odd+=1
    else: even+=1
if even>odd: print("Happy")
else: print("Sad")