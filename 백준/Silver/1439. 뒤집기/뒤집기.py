s=list(input())
a=0
b=0
l=len(s)
for i in range(0, l):
    if s[i]!=s[i-1]:
        if s[i]=='0': #1->0
            a+=1
        else:         #0->1
            b+=1
    if s[-1]=='0': a+=1
    else: b+=1
print(a if a<b else b)
