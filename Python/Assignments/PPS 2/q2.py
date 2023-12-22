password=tuple(input().split(","))
ans=[]
for i in password:
    check=tuple(i)
    lflag, nflag, uflag, sflag = 0, 0, 0, 0
    if(6<len(check)<12):
        for j in range(0,len(check)):
            if(check[j].islower()):
                lflag+=1
            if(check[j].isupper()):
                uflag+=1
            if(check[j].isnumeric()):
                nflag+=1
            if(check[j]=="$" or check[j]=="#" or check[j]=="@"):
                sflag+=1
    if(lflag>0 and nflag>0 and uflag>0 and sflag>0):
        ans.append(i)
ans=tuple(ans)
if (len(ans)==0):
    print("invalid")
else:
    print(*ans,sep=",")
