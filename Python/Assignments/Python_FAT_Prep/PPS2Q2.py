password = tuple(input("Enter the passwords you want to check:").split(","))
ans = []
for i in password:
    check = tuple(i)
    l, u, n, s= 0, 0, 0, 0
    if 6<len(check)<12:
        for j in range(0,len(check)):
            if(check[j].islower()):
                l+=1
            if(check[j].isupper()):
                u+=1
            if(check[j].isnumeric()):
                n+=1
            if(check[j]=="$" or check[j]=="#" or check[j]=="@"):
                s+=1
    if (l>0 and u>0 and n>0 and s>0):
        ans.append(i)
ans = tuple(ans)
if len(ans) == 0:
    print("invalid")
else:
    print(*ans,sep = ",")