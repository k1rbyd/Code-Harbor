num=int(input('Number of times Earthquakes has occured:'))
low=0
med=0
high=0
if num==0:
    print("no earthquake predicted")
elif num<0:
    print("Invalid Input")
else:
    for i in range(0,num):
        a=float(input('Magnitude of the Earthquake:'))
        if a<=5.4:
            low+=1
        elif a<= 7.0:
            med+=1
        elif a>7.0:
            high+=1
    print("low quakes count:",low)
    print('med quakes count:',med)
    print('high quakes count:',high)