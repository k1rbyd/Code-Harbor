total = int(input(""))
attended = int(input(""))
avg = (attended/total)*100
if avg>75:
    print(int(avg) , "\nAllowed")
else:
    choice=int(input(""))
    if choice == 1:
        print(int(avg), "\nAllowed")
    else:
        print(int(avg), "\nNot allowed")