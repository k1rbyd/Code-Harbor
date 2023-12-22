import re
pan=input()
if len(pan)==10:
    x=re.findall("[A-Z]{5}\d{4}[A-Z]$",pan)
    if (len(x)>0):
        print("Valid")
    else:
        print("Invalid")
else:
    print("Invalid")