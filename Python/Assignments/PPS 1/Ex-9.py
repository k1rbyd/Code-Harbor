def lucky():
    x=input("")
    if len(x)!=8:
        print("Cannot be processed")
        return
    oddsum = int(x[0])+int(x[2])+int(x[4])+int(x[6])
    evensum = int(x[1])+int(x[3])+int(x[5])+int(x[7])
    sum= (oddsum*3)+evensum
    sums=str(sum)
    if int(sums[1])==0:
        print(x,"Lucky number")
    else:
        print(x,"Not a lucky number")
lucky()