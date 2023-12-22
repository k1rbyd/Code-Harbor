def Pascal(n):
    for i in range(n+1):
        for s in range(n-1):
            print(end=' ')
        C=1
        for j in range(1,i+1):
            print(C,' ',sep = '',end='')
            C = C * (i-j)//j
        print()
n=int(input("Enter row count: "))
Pascal(n)
