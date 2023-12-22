nos = int(input("Enter the number:"))
x = int(input("row:"))
spaces = 0
for i in range(nos,0,-1):
    for j in range(spaces):
        print(end=" ")
    for j in range(i,+1,-1):
        print(j,end=" ")
    spaces+=2
    print()