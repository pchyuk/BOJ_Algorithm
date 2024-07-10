n,w,h,l=map(int, input().split())
cow=(w//l)*(h//l)
if cow < n :
    print(cow)
else :
    print(n)