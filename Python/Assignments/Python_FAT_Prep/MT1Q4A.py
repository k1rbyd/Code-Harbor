number, name, units = input("Enter no. name and units:").split()
units = int(units)
print("%s %s" % (number,name))
cost = 0
if 1<=units<=150:
    cost = units * 0.50
elif 150<units<=400:
    cost = (150*0.50)+((units-150)*1.20)
elif 400<units<=670:
    cost = (150*0.5)+(250*1.20)+((units-400)*1.80)
elif units>670:
    cost = (150*0.5)+(250*1.20)+((270)*1.80)+((units-670)*2)
print(units,end = " ")
if cost > 400:
    cost = cost + (cost*0.15)
    print("%.2f" % cost)
else:
    print("%.2f" % cost)