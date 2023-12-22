def add_data():
    f=open("Data.txt","a")
    num = int(input("Enter the Phone Number:"))
    name = input("Enter the Name:")
    add = input("Enter the address:")
    f.write(f"{num}                 {name}                  {add}\n")
    f.close()
    print("\n")

    
def read_data():
    f=open("Data.txt","r")
    f.seek(0)
    d=f.read()
    print("Number           Name                 Address")
    print(d)
    print("\n")

    
def delete_data():
    read_data()
    record = int(input("Which record do you want to remove:"))
    print("\n")
    with open("Data.txt", "r") as f:
        lines = f.readlines()
    with open("Data.txt", "w") as f:
        for i, line in enumerate(lines):
            if i+1 != record:
                f.write(line)

def start():
    b = int(input('''Enter 1 to input data
Enter 2 to read data
Enter 3 to delete data
    
Your Choice:'''))
    if b == 1:
        add_data()
    elif b == 2:
        read_data()
    elif b == 3:
        delete_data()
    choice=input("Would you like to continue working[y/n]:")    
    if choice=='y':
        print("\n")
        start()
    else:
        print("Alright then, Have a nice day ahead")
             
a = input("Hi There, would you like to work on the datasheet [y/n]:")
print("")
if a == "y":
    start()
else:
    print("Alright then, Have a nice day ahead")