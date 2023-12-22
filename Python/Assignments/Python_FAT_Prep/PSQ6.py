num=input("Enter the number:")
li = list(num)
print(num,end=" ")
while len(li)>1:
    if len(li)==2:
        product = eval(li[0]) * (eval(li[1]))
        print(product,end=" ")
        li=list(str(product))
    elif len(li)==3:
        product = eval(li[0]) * (eval(li[1]))* (eval(li[2]))
        print(product,end=" ")
        li=list(str(product))
    elif len(li)==4:
        product = eval(li[0]) * (eval(li[1]))* (eval(li[2]))* (eval(li[3]))
        print(product,end=" ")
        li=list(str(product))
    elif len(li)==5:
        product = eval(li[0]) * (eval(li[1]))* (eval(li[2]))* (eval(li[3]))* (eval(li[4]))
        print(product,end=" ")
        li=list(str(product))
    elif len(li)==6:
        product = eval(li[0]) * (eval(li[1]))* (eval(li[2]))* (eval(li[3]))* (eval(li[4]))* (eval(li[5]))
        print(product,end=" ")
        li=list(str(product))
    elif len(li)==7:
        product = eval(li[0]) * (eval(li[1]))* (eval(li[2]))* (eval(li[3]))* (eval(li[4]))* (eval(li[5]))* (eval(li[6]))
        print(product,end=" ")
        li=list(str(product))
    