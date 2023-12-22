main=input("Enter the string:")
count=0
s1=""
s2=""
check = [z for z in main if z!="$" and z!="@" and z!=""]
if len(main)==len(check):
    for i in range(len(main)):
        for x in range(0,i+1):
            s1 = s1 + main[x]
        for y in range(-1,-2-i,-1):
            s2 = s2 + main[y]
        if s1==s2:
            count+=1
else:
    print("Invalid input")
if count==0:
    count = 1
    print(count)
elif count>0:
    print(count)