def nsum(n):
    
    if n!=0:
        return(n + nsum(n-1))
    else:
        return n

x = int(input("Enter a number: "))
print(nsum(x))
