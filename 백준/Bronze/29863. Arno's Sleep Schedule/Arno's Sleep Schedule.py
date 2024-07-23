a=int(input())
b=int(input())
cnt=0
while (a%24)!=b:
    cnt+=1
    a+=1
print(cnt)