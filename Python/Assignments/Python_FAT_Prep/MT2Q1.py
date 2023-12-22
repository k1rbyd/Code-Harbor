import re
start = input("Enter here:")
x = re.findall("[A-Z]{3}[A,E,I,O,U]{1}[1-9]{6}",start)
if x == []:
    print("NIL")
else:
    print(*x,end=" ")