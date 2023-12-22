userid, name, no = input("Enter the credentials [id,name,no]:").split()
no = int(no)
print("%s %s" % (userid,name))
cost = 0
if 1<=no<=5:
    cost = no*0.5
elif 5<no<=12:
    cost = 5*0.5 + (no-5)*1.50
elif no>12:
    cost = 5*0.5 + 7*1.50 + (no-12)*5
if no<30:
    print(no,int(cost))
else:
    print("Membership cancelled")