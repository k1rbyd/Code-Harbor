def check():
    inpu = int(input("Enter the number greater than 10: "))
    if inpu>10:
        print("Yep, It is greater.")
        response = input("Do you want to try again [y/n]: ")
        if response == "y":
            print("okieeeee")
            check()
        else:
            print("Alright...off you goo~~~")
    else:
        print("Nope, Its not")
        response = input("Do you want to try again [y/n]: ")
        if response == "y":
            print("okieeeee")
            check()
        else:
            print("Alright...off you goo~~~")
            
check()