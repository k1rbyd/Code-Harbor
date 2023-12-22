import re
c=input("Enter Hair DNA:")
s=input("Enter Human DNA:")
ccheck=re.findall("[AGCT]",c)
scheck=re.findall("[AGCT]",s)
if(len(ccheck)!=len(c) and len(scheck)!=len(s)):
    print("MISMATCH")
else:
    dnaC=re.findall("AGCT",c)
    dnaS=re.findall("AGCT",s)
    if(len(dnaC)==len(dnaS)):
        print("MATCH")
    else:
        print("MISMATCH")