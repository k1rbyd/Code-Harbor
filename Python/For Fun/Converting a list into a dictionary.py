a = int(input("Enter the elements: "))
L=[]
for i in range(a):
    L.append(input("Enter Number: "))
D={}
for i in range(0,a-1,2):
    D[L[i]]=L[i-1]

print(D)
