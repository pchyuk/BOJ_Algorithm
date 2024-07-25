n=int(input())
div=0
if n%7==0: div=1
cnt=0
while n>0:
    if n%10==7:
        cnt=1
        break
    n=n//10
    
if cnt==0 and div==0: print("0")
elif cnt==0 and div==1: print("1")
elif cnt==1 and div==0: print("2")
elif cnt==1 and div==1: print("3")
