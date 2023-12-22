num = input("")
lst=[]
for i in num:
    if int(num) % int(i)==0:
        lst.append(i)
        lst.append(' ')
lst.reverse()
string = ' '
for element in lst:
    string+=element
print(string)