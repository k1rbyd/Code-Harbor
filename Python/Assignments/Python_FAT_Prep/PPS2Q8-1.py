import sys
x=input()
y=input()
l1=len(x)
l2=len(y)
for p in x:
    if p not in "AGCT":
        print("MISMATCH")
        sys.exit()
for q in y:
    if q not in "AGCT":
        print("MISMATCH")
        sys.exit()
pos1,pos2=[],[]
c1,c2=0,0
for i in range(l1-3):
    if x[i:i+4]=="AGCT":
        c1+=1
        pos1.append(i)
for j in range(l2-3):
    if y[j:j+4]=="AGCT":
        c2+=1
        pos2.append(j)
if c1==c2:
    if pos1==pos2:
        print("MATCH")
    else:
        print("MISMATCH")
else:
    print("MISMATCH")