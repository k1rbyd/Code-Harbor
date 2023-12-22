a = int(input(""))
b=0
c=0
for i in range(0,a):
    d=int(input(""))
    e=int(input(""))
    b += d
    c += e
f=b+c//1000
if c>1000:
    print( f, "\n", c%1000)
else:
    print(f, "\n", c)