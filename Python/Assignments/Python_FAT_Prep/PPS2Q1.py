l = eval(input("Enter the list here:"))
count = 0
li = 0
for i in l:
    count+=1
    if type(i) == list:
        count+=1
        li+=1
if li>=1:
    print(count)
else:
    print("Cannot be unpacked.")