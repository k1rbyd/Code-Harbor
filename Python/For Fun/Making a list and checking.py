l1 = []
x = int(input("Enter the number of elements you want in the list: "))
for i in range(x):
    l1.append(input("Enter the element: "))
    
for y in l1:
    print(y)

for z in l1:
    print(type(eval(z)))
