number = input("Enter the number:")
value=0
for i in number:
    if int(i)%2!=0:
        value=value+int(i)
print(value)