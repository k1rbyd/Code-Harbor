income = int(input("Enter the annual income:"))
if income>1000000:
    print("The tax to be paid is",int(income*0.04))
elif income>500000 and income<= 1000000:
    print("The tax to be paid is",int(income*0.02))
elif income<=500000:
    print("There is no tax to be paid.")