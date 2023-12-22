s=input()
check=""
flag=0
rcheck=""
verify=[j for j in s if j != "$" and j != "@"]


if(len(s)==len(verify)):
    for m in range(0,len(s)):
        check=""
        rcheck=""
        for i in range(0,m+1):
            check=check+s[i]
        for j in range(-1,-2-i,-1):
            rcheck=rcheck+s[j]
        if(check==rcheck):
            flag+=1
    if(flag==0):
        flag=1
    print(flag)
else:
    print("Invalid Input")
