f=open('diabetes')
nl=f.readlines()
numl=str(len(nl))
f.seek(0)
nullflag=0
for line in f:
    for ch in line:
        if(ch=='0'):
            nullflag+=1
a=open('adiabetes','w')
a.write(numl)
a.write("\n")
a.write(str(nullflag))
f.close()
a.close()