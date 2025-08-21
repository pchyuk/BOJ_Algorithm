def ip(): return int(input())
def sp(): return str(input().rstrip())
 
def mip(): return map(int, input().split())
def msp(): return map(str, input().split().rstrip())
 
def lmip(): return list(map(int, input().split()))
def lmsp(): return list(map(str, input().split().rstrip()))
 
n = ip()
p = lmip()
ans = 0
for i in p:
    ans ^= ((i + 1) // 2 if i & 1 else (i - 2) // 2)
print("koosaga" if ans else "cubelover")