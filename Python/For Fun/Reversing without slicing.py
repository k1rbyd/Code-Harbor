word=input("Enter the word: ")
o = ''
for i in range(-1,-len(word)-1,-1):
    o = o + word[i]
print(o)
