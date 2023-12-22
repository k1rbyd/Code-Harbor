r = int(input("Enter range: "))
spaces = 0
for i in range(r,0,-1):
    for c in range(spaces):
        print(end= ' ')
    for c in range(i,0,-1):
        print(c,end= ' ')
    spaces +=2
    print()
    
