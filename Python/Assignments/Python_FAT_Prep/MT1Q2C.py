num=input("Enter the number:")
ans=[]
count = 0
for i in num:
    ans.append(eval(i))
value=int(input("Enter the number you want to check:"))
for i in ans:
    if i<value:
        count+=1
print(count)