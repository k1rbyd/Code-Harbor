import re
pan = input("Enter the sentence:")
x = re.findall("[A,E,I,O,U][A-Z]{4}[3-9]{5}",pan)
if len(x)==0:
    print('NIL')
else:
    print(*x,end=" ")