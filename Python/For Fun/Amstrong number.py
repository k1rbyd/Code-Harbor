num=int(input("Enter the number you want to check: "))
s = str(num)
x = len(s)
sum = 0

for i in range(x):
    sum = sum+ (int(s[i]))**x

if  sum == num:
    print("Yes")
else:
    print("No")
