def nsumr(n,m):
    s = 0
    if n==m:
        return m
    else:
        s = s + n
        return(n + nsumr(n+1,m))

x = int(input("Enter a number: "))
y = int(input("Enter range limit: "))
print(nsumr(x,y))
