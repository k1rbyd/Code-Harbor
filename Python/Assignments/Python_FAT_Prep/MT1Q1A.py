nos = int(input("Enter the number of rows:"))
spaces = nos
for i in range(1,nos+1):
    for j in range(spaces):
        print(end= ' ')
    for j in range(i):
        print(j+1,end=" ")
    spaces-=1
    print()