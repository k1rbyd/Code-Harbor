import re
strng = input("Enter the comment here:")
for j in range(len(strng)):
    for i in strng:
        if i=="a" or i=="e" or i=="i" or i=="o" or i=="u":
            x=re.sub(i,"",strng)
            strng = x
print(x)