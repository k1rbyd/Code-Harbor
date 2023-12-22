def cancel():
    print('-----------------------------')
    print("Cancellation Refund Details")
    print(
        "20 days before the date of journey - Full Refund\n2 weeks before the date of journey - 90% Fare Refund\n1 week  before the date of journey - 80% Fare Refund\n4 days  before the date of journey - 50% fare refund\n<4 days - No refund")
    passname, passage = [], []
    npass = int(input("Enter number of passengers: "))
    for i in range(0, npass):
        name, age = map(str, input("Enter your details: ").split(","))
        passname.append(name)
        passage.append(age)
    date = input("Enter cancellation date: ")


def Achoice():
    totalamt = 0
    passname, passage = [], []
    npass = int(input("Enter number of passengers: "))
    tseats = []
    regular = len(seats)
    tatkal = len(ltatkal)
    for s in range(0, npass):
        tseats.append(seats[0])
        seats.remove(tseats[s])
    for i in range(0, npass):
        name, age = map(str, input("Enter your details: ").split(","))
        passname.append(name)
        passage.append(age)
    regular = regular - npass
    print('-----------------------------')
    print("Fare Details from Bangalore")
    print('-----------------------------')
    print("Regular:\nHosur Rs. 75\nVaniyambadi Rs.250\nVellore Rs. 500\nWalaja Rs. 600\nChennai Rs. 750")
    print("* For senior citizens, 10% concession (Age 60 and above)")
    dest = input("Enter Destination: ")
    date = input("Enter travel date: ")
    if dest == "Hosur":
        rate = 75
    elif dest == "Vaniyambadi":
        rate = 250
    elif dest == "Vellore":
        rate = 500
    elif dest == "Walaja":
        rate = 600
    elif dest == "Chennai":
        rate = 750

    for j in passage:
        if int(j) >= 60:
            totalamt = totalamt + int(rate * 0.9)
        else:
            totalamt = totalamt + rate
    totalamt = str(totalamt)

    fp.write("Remaining Seats: ")
    fp.write("\n")
    fp.write(f"Regular = {regular}")
    fp.write("\n")
    fp.write(f"Tatkal = {tatkal}")
    fp.write("\n")
    fp.write(f"Passenger Name - Age - Source - Destination - Seat No")
    fp.write('\n')
    for k in range(0, len(passname)):
        fp.write(f"{passname[k]}-{passage[k]}-Bengaluru-{dest}-{tseats[k]}")
        fp.write("\n")
    fp.write(f"Date of Journey: {date}")
    fp.write('\n')
    fp.write(f'Total Fare: {totalamt}')
    fp.write("\n\n")


def Bchoice():
    global rate
    totalamt = 0
    passname, passage = [], []
    npass = int(input("Enter number of passengers: "))
    tseats = []
    tatkal = len(ltatkal)
    regular = len(seats)
    for s in range(0, npass):
        if (len(ltatkal) > 0):
            tseats.append(ltatkal[0])
            ltatkal.remove(ltatkal[0])
        else:
            break
    for i in range(0, npass):
        name, age = map(str, input("Enter your details: ").split(","))
        passname.append(name)
        passage.append(age)
    tatkal = tatkal - npass
    print('-----------------------------')
    print("Fare Details from Bangalore")
    print('-----------------------------')
    print("Regular:\nHosur Rs. 75\nVaniyambadi Rs.250\nVellore Rs. 500\nWalaja Rs. 600\nChennai Rs. 750")
    print("* For senior citizens, 10% concession (Age 60 and above)")
    print("Tatkal Booking fare - Rs. 100 addition to the regular fare")
    dest = input("Enter Destination: ")
    date = input("Enter travel date: ")
    if dest == "Hosur":
        rate = 75 + 100
    elif dest == "Vaniyambadi":
        rate = 250 + 100
    elif dest == "Vellore":
        rate = 500 + 100
    elif dest == "Walaja":
        rate = 600 + 100
    elif dest == "Chennai":
        rate = 750 + 100

    for j in passage:
        if int(j) >= 60:
            totalamt = totalamt + int(rate * 0.9)
        else:
            totalamt = totalamt + rate
    totalamt = str(totalamt)

    fp.write("Remaining Seats: ")
    fp.write("\n")
    fp.write(f"Regular = {regular}")
    fp.write("\n")
    fp.write(f"Tatkal = {tatkal}")
    fp.write("\n")
    fp.write(f"Passenger Name - Age - Source - Destination - Seat No")
    fp.write('\n')
    for k in range(0, len(passname)):
        fp.write(f"{passname[k]}-{passage[k]}-Bengaluru-{dest}-{tseats[k]}")
        fp.write("\n")
    fp.write(f"Date of Journey: {date}")
    fp.write('\n')
    fp.write(f'Total Fare: {totalamt}')
    fp.write("\n\n")


with open('reservation', 'w') as fp:
    passname, passage = [], []
    seats = ['15', '14', '13', '9', '8', '7', '6', '5', '4', '3', '2', '1']
    ltatkal = ['12', '11', '10']
    print('-----------------------------')
    print("Main Menu")
    with open('credentials', 'r') as cp:
        ucheck = cp.read(3)
        pcheck = (cp.read(4)).lstrip()
    user = input("Username: ")
    password = input("Password: ")
    if ucheck == user and pcheck == password:
        print('-----------------------------')
        choice = int(input("1. Booking\n2. Cancellation\n3. Exit\n"))
        while choice != 3:
            if (choice == 1):
                print('-----------------------------')
                print("Booking Menu")
                schoice = input("A. Regular\nB. Tatkal\n")
                if (schoice == 'A'):
                    Achoice()
                elif (schoice == 'B'):
                    Bchoice()
            elif (choice == 2):
                cancel()

            choice = int(input("1. Booking\n2. Cancellation\n3. Exit\n"))
        fp.close()
    else:
        print("Invalid Credentials")
	 	  	 	  	  	     	 	 		  	 	
