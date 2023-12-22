word = input("Enter the word: ")
open = ' '
for i in range(1,len(word),2):
    open = open + word[i]
print(open)
