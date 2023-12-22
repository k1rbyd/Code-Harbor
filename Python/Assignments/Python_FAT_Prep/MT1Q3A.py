width,height=(input("Enter the values of width and height:").split())
width = int(width)
height = int(height)
no = int(input("Enter no. of boxes:"))
liste=[]
for i in range(no):
    x = tuple(input("Enter the values l w h:").split())
    liste.append(x)
#to check and display
for a in liste:
    if int(a[1])<=width:
        if int(a[2])<=height:
                print(*a, int(a[0])*int(a[1])*int(a[2]))