import cmath
#import numpy as np
import sys

def pal(x):
    if x.lower()==x[::-1].lower():
        return True
    else:
        return False

def prim(z):
    if z<=0:
        return False
    for t in range(2,z,1):
        if z%t==0:
            return False
    else:
        return True

x=input("Enter a List with maximum 2 strings, 2 complex numbers, and 2 integers")
a=eval(x)
c1,cnt1=0,0
c2,cnt2=0,0
c3,cnt3=0,0
L1=[]
L2=[]
L3=[]
if(len(a)>6):
    print("Invalid Data")
else:
    pos=0
    for i in a:
        if type(i)==str:
            c1+=1
            L1.append(pos)
        if type(i)==complex:
            c2+=1
            L2.append(pos)
        if type(i)==int:
            c3+=1
            L3.append(pos)
        pos+=1
    if c1>2 or c2>2 or c3>2:
        print("Invalid Data")
        sys.exit()

    if len(a)%2==0:
        mid1,mid2=a[(len(a)//2)-1],a[len(a)//2]
    else:
        mid=a[(len(a)-1)//2]

            
    for j3 in range(c3):
        if prim(a[L3[j3]])==True:
            cnt3+=1
            
    if cnt3>0:
        for k in range(c1):
            a[L1[k]]=a[L1[k]][::-1]
        for l in range(c2):
            a[L2[l]]=complex(int(a[L2[l]].imag),int(a[L2[l]].real))
            
    for j1 in range(c1):
        if pal(a[L1[j1]])==True:
            cnt1+=1
    if cnt1>0:
        #for k in range(c2):
        #    a[L2[k]]=np.conj(a[L2[k]])
        for l in range(c3):
            a[L3[l]]*=(-1)
            
    if cnt1==0 and cnt3==0:
        for k in range(c1):
            a[L1[k]]=list(a[L1[k]])
            
    if cnt1>0 and cnt3>0:
        if len(a)%2==0:
            print(mid1,",",mid2)
        else:
            print(mid)
    else:
        print(a)