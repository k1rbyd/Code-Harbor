n=input("")
d={1:"I",2:"II",3:"III",4:"IV",5:"V",6:"VI",7:"VII",8:"VIII",9:"IX",10:"X"}
if int(n)<=10:
    print({d[int(n)]})
elif 10<int(n)<=20:
    print(f"X{d[int(n)-10]}")
elif 20<int(n)<=30:
    print(f"XX{d[int(n)-20]}")
elif 30<int(n)<=40:
    if n==40:
        print("XL")
    else:
        print(f"XXX{d[int(n)-30]}")
elif 40<int(n)<=50:
    if n ==50:
        print("L")
    else:
        print(f"XX{d[int(n)-40]}")    
elif 50<int(n)<=60:
    print(f"L{d[int(n)-50]}")
elif 60<int(n)<=70:
    print(f"LX{d[int(n)-60]}")
elif 70<int(n)<=80:
    print(f"LXX{d[int(n)-70]}")    
elif 80<int(n)<=90:
    if n ==90:
        print("XC")
    else:
        print(f"LXXX{d[int(n)-80]}")      
elif 90<int(n)<=99:
    print(f"XC{d[int(n)-90]}")
    	 	  	 	  	  	     		     	      	       	 	
