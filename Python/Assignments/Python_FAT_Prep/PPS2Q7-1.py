a={}
for i in range(1,10):
    a[i]=input()
print(a)
n = int(input("Enter lucky number:"))
l = int(input("Enter the length:"))
for i in range(1,10):
    for j in range(1,10):
        if i>j:
            continue
        for k in range(1,10):
            if i>k or j>k:
                continue
            if i+j+k==n and i!=j and i!=k and j!=k:
                print(a[i]+a[j]+a[k])