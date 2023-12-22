I = eval(input())
ccount, scount, icount, integer, string, rev = 0, 0, 0, [], [], []
prime = []
flag=0
ans = []
# counts the number of times a certain datatype is present in the list
for i in I:
    if (type(i) == complex):
        ccount += 1
    elif (type(i) == str):
        scount += 1
        string.append(i)
    elif (type(i) == int):
        icount += 1
        integer.append(i)

# reversal of string values within the string list
rev = [i[::-1] for i in string]

# checking and appending the prime integers in the integer list
for n in integer:
    if n > 1:
        for i in range(2, n):
            if (n % i) == 0:
                break
        else:
            prime.append(n)

# checking for palindromes
for k in range(0,len(string)):
    if(string[k].lower()==rev[k].lower()):
        flag+=1


# prints answers based off the given conditions
if(len(I)>1):
    if(ccount, scount, icount<=2):
        if (len(prime) == 0 and flag>0):
            for a in I:
                if (type(a) == complex):
                    ans.append(a.conjugate())
                elif (type(a) == str):
                    ans.append(a)
                elif (type(a) == int):
                    a=-a
                    ans.append(a)
            print(ans)
        elif (len(prime)>0 and flag==0):
            for a in I:
                if (type(a) == complex):
                    real=int(a.real)
                    imag=int(a.imag)
                    ans.append(complex(imag,real))
                elif (type(a) == str):
                    rev=([a[::-1]])
                    ans.append(*rev)
                elif (type(a) == int):
                    ans.append(a)
            print(ans)
        elif(len(prime) > 0 and flag>0):
            mid = int((len(I) - 1) / 2)
            print(I[mid])
        elif(len(prime) == 0 and flag==0):
            for a in I:
                if (type(a) == complex):
                    ans.append(a)
                elif (type(a) == str):
                    for i in range(0,len(a)):
                        ans.append(a[i])
                elif (type(a) == int):
                    ans.append(a)
            print(ans)
else:
    print("Invalid Data")	 	  	  	     	 	 		  	 	
