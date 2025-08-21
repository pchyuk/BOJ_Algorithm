n = int(input())
a = list(map(int, input().split()))
t = 0
for i in a:
    t^=i
 
ans = 0
for i in range(n):
    for j in range(1, a[i]+1):
        p = a[i] - j
        p ^= a[i]
        p ^= t
        if p == 0:
            ans += 1
print(ans)