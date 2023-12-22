d = {'A':1,'B':2,'C':3,'D':4,'E':5,"F":6,"G":7,"H":8,"I":9,"J":1,"K":2,"L":3,"M":4,"N":5,"O":6,"P":7,"Q":8,"R":9,"S":1,"T":2,"U":3,"V":4,"W":5,"X":6,"Y":7,"Z":8}
v = {"A":1,"E":5,"I":9,"O":6,"U":3}
c = {'B':2,'C':3,'D':4,"F":6,"G":7,"H":8,"J":1,"K":2,"L":3,"M":4,"N":5,"P":7,"Q":8,"R":9,"S":1,"T":2,"V":4,"W":5,"X":6,"Y":7,"Z":8}
strng = input("Type the input here:")
def destiny():
    num=0
    l=[]
    for i in strng:
        a = d.get(i)
        num = num + a
    num=str(num)
    l=list(num)
    script=0
    for j in l:
        script=script+int(j)
    print(script)
destiny()
def soul():
    num=0
    l=[]
    for i in strng:
        if i in v.keys():
            num = num + v.get(i)
    num=str(num)
    l=list(num)
    script=0
    for j in l:
        script=script+int(j)
    print(script)
soul()
def dream():
    num=0
    l=[]
    for i in strng:
        if i in c.keys():
            num = num + c.get(i)
    num=str(num)
    l=list(num)
    script=0
    for j in l:
        script=script+int(j)
    print(script)
dream()