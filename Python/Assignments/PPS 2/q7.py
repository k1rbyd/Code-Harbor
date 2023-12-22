char=input()
dataset=char.split(" ")
n=int(input())
nchar=int(input())
end=0
d=[]
val=[]
if(nchar==2):
    end=100
elif(nchar==3):
    end=1000
elif(nchar==4):
    end=10000
elif(nchar==5):
    end=100000
elif(nchar==6):
    end=1000000
elif(nchar==7):
    end=10000000
elif(nchar==8):
    end=100000000
elif(nchar==9):
    end=1000000000
for i in range(10,end):
    sno=str(i)
    d=[]
    for j in range(0,len(sno)):
            d.append(int(sno[j]))
    s=sum(d)
    if(s==n):
        sno=sno.replace("0","")
        sno=sno.replace("1",dataset[0])
        sno=sno.replace("2", dataset[1])
        sno=sno.replace("3", dataset[2])
        sno=sno.replace("4", dataset[3])
        sno=sno.replace("5", dataset[4])
        sno=sno.replace("6", dataset[5])
        sno=sno.replace("7", dataset[6])
        sno=sno.replace("8", dataset[7])
        sno=sno.replace("9", dataset[8])
        dup = [c for c in sno]
        dup = set(dup)
        dup = list(dup)
        sno = "".join(dup)
        if (len(sno) == nchar):
            val.append(sno)
sval = []
finalval = []
for v in val:
    temp = sorted(v)
    sval.append(temp)
for i in range(0, len(sval)):
    temp2 = sval[i]
    temp2 = set(temp2)
    temp2 = list(temp2)
    temp2 = ''.join(temp2)
    finalval.append(temp2)
finalval = set(finalval)
finalval = list(finalval)
for p in finalval:
    if (len(p) == nchar):
        p=sorted(p)
        p=''.join(p)
        print(p)	 	  	 	  	  	     	 	 		  	 	
