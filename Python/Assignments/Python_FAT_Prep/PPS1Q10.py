num = input("Enter the number:")
number = eval(num)
ans = []
for i in num:
    ans.append(eval(i))
real = ans[::-1]
for j in real:
    if number % j == 0:
        print(j, end=" ")