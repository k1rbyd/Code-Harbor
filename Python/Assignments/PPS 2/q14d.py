def fn1():
    customid=int(input("Which Customers bill: "))
    totalamt=0
    for i in range(0,len(orders)):
        check=orders[i]
        if(check[0])==customid:
            totalamt=totalamt+check[4]
    print(f"Rs.{totalamt}")

def fn2():
    noprod = []
    nameprod = []
    maxprod, minprod = 0, 0
    for j in range(0, len(orders)):
        check2 = orders[j]
        noprod.append(check2[2])
        nameprod.append(check2[1])
    maxprod = max(noprod)
    maxi = noprod.index(maxprod)
    print(f"{nameprod[maxi]} has been ordered {maxprod} times making it the most ordered")
    minprod = min(noprod)
    mini = noprod.index(minprod)
    print(f"{nameprod[mini]} has been ordered {minprod} times making it the least ordered")


def fn3():
    custID=[]
    prodNum=[]
    index=0
    for k in range(0,len(orders)):
        IDcheck=orders[k]
        custID.append(IDcheck[0])
    for l in range(0,len(custID)):
        sum=0
        for u in range(0,len(orders)):
            prodCheck=orders[u]
            if prodCheck[0]==custID[l]:
                sum=sum+prodCheck[2]
        prodNum.append(sum)
        prodMax=max(prodNum)
        index=prodNum.index(prodMax)
    print("The Customer with the most orders placed is", custID[index])



custno=int(input("No. of Customers "))
productno=int(input("No. of products: "))
orders=[]
order=[]
for i in range(1,custno+1):
    order=[]
    id=int(input("Customer ID: "))
    order.append(id)
    prod=input("Product: ")
    order.append(prod)
    quant=int(input("Quantity: "))
    order.append(quant)
    rate=float(input("Rate: "))
    order.append(rate)
    totalrate=quant*rate
    order.append(totalrate)
    orders.append(order)

allcost=0
for o in orders:
    cost=int(o[4])
    allcost=allcost+cost

with open('sales', 'w') as fp:
    fp.write("customerId,Product,Quantity,rate,TotalPrice")
    fp.write("\n")
    for item in orders:
        for i in range(0,len(item)):
            if(i!=len(item)-1):
                fp.write(str(item[i]))
                fp.write(",")
            else:
                fp.write(str(item[i]))
        fp.write("\n")
    fp.write(f"Total Amount: Rs.{allcost}")
    fp.close()
fn1()
fn2()
fn3()

	 	  	 	  	  	     	 	 		  	 	
