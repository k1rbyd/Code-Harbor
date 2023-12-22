a = int(input("Enter no. of keys: "))
lk = []
for i in range(a):
    lk.append(input("Enter keys: "))
b = int(input("Enter no. of values: "))
lv = []
for i in range(b):
    lv.append(input("Enter Value: "))
D = {}
for i in range(a):
    D[lk[i]]=lv[i]
print(D)
