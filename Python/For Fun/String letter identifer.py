word = input("Enter the word: ")
upper = 0
lower = 0
for i in word:
    if i.islower()==True:
        lower= lower +1
    if i.isupper()==True:
        upper=upper+1
print("Upper case: ", upper)
print("Lower case: ", lower)
