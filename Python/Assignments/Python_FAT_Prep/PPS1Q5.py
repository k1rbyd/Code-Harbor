dis = int(input("Enter the distance travelled by the vehicle:"))
cost = 0
if dis<=1000:
    cost = 0
elif 1000<dis<=10000:
    cost = 50
elif 10000<dis<=20000:
    cost = 150
elif 20000<dis<=40000:
    cost = 250
elif 40000<dis<=60000:
    cost = 350
elif 60000<dis:
    cost = 500
print("The driver needs to pay %d" % cost)