num=input("Enter the number:")
count=0
ans=[]
for i in num:
    ans.append(eval(i))
value=int(input("Enter the number you want to find:"))
for i in ans:
    if i==value:
        count+=1
print(count)