def nCr(x,y):
    if y>x:
        return 0
    if y==0 or x==y:
        return 1
    else:
        return nCr(x-1,y-1)+nCr(x-1,y)
test=int(input("No. of test cases:"))
for i in range(test):
    n, r = input("Enter n and r:").split()
    n, r = int(n),int(r)
    su = nCr(n,r)
    print(su)