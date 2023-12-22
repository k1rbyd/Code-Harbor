num=int(input("Enter the number:"))
print(num, end=" ")
while num>1:
    if num%2==0:
        num=num/2
        print(int(num),end=" ")
    else:
        num=num//3
        print(int(num),end=" ")