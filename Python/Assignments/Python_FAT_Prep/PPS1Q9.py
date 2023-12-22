dob = []
num = input("Enter the number you want to check:")
for i in num:
    dob.append(eval(i))
length = len(dob)
eve = []
odd = []
for j in range(1,length,2):
    odd.append(dob[j])
for j in range(0,length,2):
    eve.append(dob[j])
x = 0
y = 0
for k in odd:
    x = x + k
for l in eve:
    y = y+l
x = x*3
y = y + x
if y % 10 == 0:
    print("Lucky Number")
else:
    print("Not a Lucky Number")