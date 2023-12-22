id,name,units= input("Enter the credentials:").split()
print(id,name)
units = int(units)
cost = 0
if 1<=units<=150:
    cost = units*0.5
elif 150<units<=400:
    cost = 150*0.5 + (units-150)*1.2
elif 400<units<=670:
    cost = 150*0.5 + 250*1.2 + (units-400)*1.8
elif units>670:
    cost = 150*0.5 + 250*1.2 + 270*1.8 + (units-670)*2
if cost>400:
    print(units,cost+(cost*0.15))
else:
    print(units,cost)