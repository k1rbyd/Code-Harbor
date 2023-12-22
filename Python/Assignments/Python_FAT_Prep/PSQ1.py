N=int(input("Enter the rows:"))
M=int(input("Enter the number:"))
spaces=(N*2)-2
k=M
for r in range(1,N+1):
    for c in range(spaces):
        print(end=' ')
    for c in range(k,M+1):
        print(c,end=' ')
    k=k-1
    spaces-=2
    print()