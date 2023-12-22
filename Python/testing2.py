units = int(input("Enter the units used:"))
bill = 0

if(units>0 and units<=100):
    bill = units * 5
elif (units>100 and units<=250):
    bill = ((100) * 5 ) + ((units-100)*10)
elif (units>250):
    bill = ((100)*5) + ((150)*10) + ((units-250)*20)

print("Total bill with added 75 is:" , bill + 75)
    