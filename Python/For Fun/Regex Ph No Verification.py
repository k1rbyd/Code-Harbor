import re
phone = int("Enter the mobile no: ")
if re.findall('^7,8,9[0-9]{9}$',phone):
    print("Valid")
else:
    print('Invalid')
