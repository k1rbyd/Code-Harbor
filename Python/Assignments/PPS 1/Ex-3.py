a = int(input(""))
if a<=500000:
    print("NIL")
elif a<=1000000:
    print(int(0.02*a))
else:
    print(int(0.04*a))