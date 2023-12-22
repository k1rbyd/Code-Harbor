W, H= input("Enter the values of W and H:").split()
W=int(W)
H=int(H)
s=[]
num=int(input("Enter how many boxes:"))
for i in range(num):
    l=tuple(input("Enter the length,weight and height:").split())
    s.append(l)
for j in s:
    if int(j[1])<=W:
        if int(j[2])<=H:
            print(*j , int(j[0])*int(j[1])*int(j[2]))