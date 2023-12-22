code = int(input("Enter [1] for Programmic courses, [2] for Robotic courses and [3] for Acedamic courses:"))
price = int(input("Enter the course ammount:"))
if code == 1:
    if price>1000:
        price = price - (price * (1/10))
        print("Net amount:",int(price))
    else:
        print("Net amount:",price)
elif code == 2:
    if price>750:
        price = price - (price * (1/20))
        print("Net amount:",int(price))
    else:
        print("Net amount:",price)
elif code == 3:
    if price>500:
        price = price - (price * (1/10))
        print("Net amount:",int(price))
    else:
        print("Net amount:",price)
else:
    print("Wrong Input")
