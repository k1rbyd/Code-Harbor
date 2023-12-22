import re
epic = input("Enter the sentence:")
x = re.findall("[A-Z][A,E,I,O,U][A-Z][0-9]{7}",epic)
if len(x)==0:
    print('NIL')
else:
    print(*x,end=" ")