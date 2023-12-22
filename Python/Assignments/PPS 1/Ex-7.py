x = int(input(""))
if x == 1:
    m=int(input(""))
    if m>=1000:
        print(m-(m*10)/100)
    else:
        print(m)
elif x==2:
    n=int(input(""))
    if n>=750:
        print(n-(n*5)/100)
    else:
        print(n)
elif x==3:
    p=int(input(""))
    if p>=500:
        print(p-(p*10)/100)
    else:
        print(p)