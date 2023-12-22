import re
s=input()
x=re.sub("[aeiouAEIOU]","",s)
print(x)