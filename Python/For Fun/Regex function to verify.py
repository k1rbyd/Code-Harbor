import re
S1 = '15BEC0234'
S2 = '20bec0434'
S3 = '15BEC234'

if re.findall("[0-9][0-9][a-zA-Z][a-zA-Z][a-zA-Z][0-9][0-9][0-9][0-9]",S1):
    print("Valid")
else:
    print('Invalid')

if re.findall("[0-9][0-9][a-zA-Z][a-zA-Z][a-zA-Z][0-9][0-9][0-9][0-9]",S2):
    print("Valid")
else:
    print('Invalid')

if re.findall("[0-9][0-9][a-zA-Z][a-zA-Z][a-zA-Z][0-9][0-9][0-9][0-9]",S3):
    print("Valid")
else:
    print('Invalid')
