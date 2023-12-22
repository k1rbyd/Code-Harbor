mainset={'1AJS','2BKT','3CLU','4DMV','5ENW','6FOX','7GPY','8HQZ','9IR'}
inp=list((input().upper()))
import string
alpha=string.ascii_letters+' '
valid=True
for i in inp:
    if i not in alpha:
        valid=False
if valid==False:
    print("Invalid Input")
else:
    def add(a):
            b=str(a)
            c=0
            if len(b)>1:
                for i in b:
                    c+=int(i)
                return c
            else:
                return a
    def enter(inp):
            iset=set()
            for i in range(len(inp)):
                iset.add(str(i)+inp[i])
            return iset
    def destiny():
            count=0
            for i in enter(inp):
                for j in mainset:
                    if i[len(i)-1] in j:
                        count+=int(j[0])
            return add(count)
    def soul():
            count=0
            for i in enter(inp):
                for j in mainset:
                    if i[len(i)-1] in j and i[len(i)-1] in ['A','E','I','O','U']:
                        count+=int(j[0])
            return add(count)
    def dream():
            count=0
            for i in enter(inp):
                for j in mainset:
                    if i[len(i)-1] in j and i[len(i)-1] not in ['A','E','I','O','U']:
                        count+=int(j[0])
            return add(count)
    print(destiny())
    print(soul())
    print(dream())	 	  	 	  	  	     	 	 		  	 	
