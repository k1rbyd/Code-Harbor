classes_held = int(input("Enter the no. of classes held:"))
classes_attended = int(input("Enter the no. of classes attended:"))
medical_proof = int(input("Enter 1 for Yes/0 for No :"))
fraction = (classes_attended/classes_held) * 100
if fraction > 75:
    print("Allowed")
else:
    if medical_proof == 1:
        print("Allowed")
    else:
        print('Not Allowed')