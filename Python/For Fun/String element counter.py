word = input("Enter the word: ")
num = 0
letter = 0
for i in word:
    if i.isdigit() == True:
        num = num + 1
    if i.isalpha() == True:
        letter = letter + 1
print("The total number of letters are ", letter)
print("The total number of numbers are ", num)
