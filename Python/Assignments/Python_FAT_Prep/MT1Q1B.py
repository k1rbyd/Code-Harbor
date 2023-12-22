nos = int(input("Enter the number of rows:"))
spaces = (nos*2)-2
for i in range(1,nos+1):
    for j in range(spaces):
        print(end=" ")
    for j in range(1,i+1):
        print(j,end=" ")
    spaces-=2
    print()