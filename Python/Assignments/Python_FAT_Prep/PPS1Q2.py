points = int(input("Enter the number of inputs you want to give: "))
ml = []
l = []
for i in range(points):
    a = int(input("Enter the number of litres:"))
    l.append(a)
    b = int(input('Enter the number of millilitre:'))
    ml.append(b)
litre = 0
millilitre = 0
for i in l:
    litre = litre + i
for j in ml:
    millilitre = millilitre + j
    while millilitre > 1000:
        millilitre = millilitre - 1000
        litre = litre + 1
print(litre)
print(millilitre)