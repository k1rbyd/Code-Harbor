import re
pan = input("Enter the PAN Card:")
if len(pan)==10:
    x=re.findall("^[A-Z]{5}[0-9]{4}[A-Z]$",pan)
    print(x)
    if len(x)>0:
        print("Valid")
    else:
        print("Invalid")
else:
    print("Invalid")