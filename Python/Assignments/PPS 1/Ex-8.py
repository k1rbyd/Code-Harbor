n=int(input(''))
b=0
c=0
d=0
if n==0:
    print("no earthquake predicted")
elif n<0:
    print("Invalid Input")
else:
    for i in range(0,n):
        a=float(input(''))
        if a<=5.4:
            b+=1
        elif a<= 7.0:
            c+=1
        elif a>7.0:
            d+=1
    print(b)
    print(c)
    print(d)