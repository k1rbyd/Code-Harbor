num=input("Enter the number:")
l=[]
ans=[]
for i in num:
    l.append(eval(i))
for x in l:
    if x%2!=0:
        ans.append(x)
sum = 0
for y in ans:
    sum = sum + y
print(sum)