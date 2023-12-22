d = {1:"I",2:"II",3:"III",4:"IV",5:"V",6:"VI",7:"VII",8:"VIII",9:"IX",10:"X"}
num = int(input("Enter the number:"))
if int(num)<=10:
    print({d[int(num)]})
elif 10<int(num)<=20:
    print(f"X{d[int(num)-10]}")
elif 20<int(num)<=30:
    print(f"XX{d[int(num)-20]}")
elif 30<int(num)<=40:
    if num==40:
        print("XL")
    else:
        print(f"XXX{d[int(num)-30]}")
elif 40<int(num)<=50:
    if num ==50:
        print("L")
    else:
        print(f"XX{d[int(num)-40]}")    
elif 50<int(num)<=60:
    print(f"L{d[int(num)-50]}")
elif 60<int(num)<=70:
    print(f"LX{d[int(num)-60]}")
elif 70<int(num)<=80:
    print(f"LXX{d[int(num)-70]}")    
elif 80<int(num)<=90:
    if num ==90:
        print("XC")
    else:
        print(f"LXXX{d[int(num)-80]}")      
elif 90<int(num)<=99:
    print(f"XC{d[int(num)-90]}")    	       	