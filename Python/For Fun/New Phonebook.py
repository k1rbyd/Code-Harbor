Num = []
Name = []
Address = []

def new():
    f = open("Data.txt", "a")
    try:
        a = int(input("Enter the 9-digit mobile number:"))
    except ValueError:
        print("Error: Invalid input for mobile number. Please enter a valid integer.")
        return
    b = input("Enter the name:")
    c = input("Enter the address:")
    Num.append(a)
    Name.append(b)
    Address.append(c)
    f.write(f"{a}        {b}      {c}\n")
    f.close()
    
def edit():
    try:
        ind = int(input("What record do you want to edit:"))
        choi = input("What do you want to edit [Phone Number/Name/Address]:")
        if choi == "Phone Number":
            a = int(input("Enter the 9-digit mobile number:"))
            Num[ind - 1] = a
        elif choi == "Name":
            b = input("Enter the name:")
            Name[ind - 1] = b
        elif choi == "Address":
            c = input("Enter the address:")
            Address[ind - 1] = c
        else:
            print("Invalid choice. Please enter either 'Phone Number', 'Name', or 'Address'.")
            return edit()
    except ValueError:
        print("Invalid input. Please enter a valid integer for the record number and a valid 9-digit integer for the mobile number.")
        return edit()

    f = open("Data.txt", "w")
    for i in range(len(Num)):
        f.write(f"{Num[i]}      {Name[i]}      {Address[i]}\n")
    f.close()

def delete():
    read()
    try:
        ind = int(input("Enter the record's count that you want to remove:"))
        ind = ind - 1
        if ind < 0 or ind >= len(Num):
            raise ValueError("Invalid index")
        Num.pop(ind)
        Name.pop(ind)
        Address.pop(ind)
        f = open("Data.txt", "w")
        for i in range(len(Num)):
            f.write(f"{Num[i]}      {Name[i]}      {Address[i]}\n")
        f.close()
    except ValueError as ve:
        print("Error:", ve)
    except Exception as e:
        print("Error:", e)


def read():
    try:
        f = open("Data.txt", "r")
        f.seek(0)
        r = f.read()
        print("Ph. Number       Name        Address")
        print(r)
        f.close()
    except FileNotFoundError:
        print("Error: The file does not exist.")
    except:
        print("Error: Unable to read the file.")


def start():
    try:
        choice = int(input('''What do you want to do?
    1.Input New Records
    2.Edit Existing Records
    3.Delete Records
    4.Display Existing Records
Your Choice:'''))
        if choice == 1:
            new()
        elif choice == 2:
            edit()
        elif choice == 3:
            delete()
        elif choice == 4:
            read()
        c = input("Do you want to continue the program [y/n]:")
        if c == "y":
            start()
        else:
            print("Have a nice day ahead")
    except ValueError:
        print("Invalid input. Please enter a valid input.")
        start()

h = input("Hello there, would you like to work with some files today?[y/n]:")
if h == "y":
    print("Beware, its a one time data storing program. Once the data inputted is wrong, you have to go and save it manually if you exit the program ^^.")
    start()
else:
    print("Have a nice day ahead ^^.")