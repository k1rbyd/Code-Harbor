name,no = input("Enter name and no. of copies:").split()
no = int(no)
cost = 0
if 1<=no<=10:
    cost = no*3
elif 10<no<=20:
    cost = 10*3 + (no-10)*1.50
elif 20<no:
    cost = 10*3 + 10*1.50 + (no-20)*0.50
if no>100:
    cost = cost - (cost*0.10)
    print(name,no,cost)
    print("Discount added")
else:
    print(name,no,cost)