n=int(input())
word = input()
count = 0
for i in word:
    if i == 'a' or i == 'i' or i == 'e' or i == 'o' or i == 'u':
        count=count+1
        
print(count)