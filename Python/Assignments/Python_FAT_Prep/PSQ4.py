num = int(input("Enter the number you want to test:"))
li=[]
su=0
for i in range(1,num):
    if num%i==0:
        li.append(i)
for k in range(len(li)):
    su = su+ li[k]
if sum==num:
    print("Its a perfect number")
else:
    print("Not a perfect number")