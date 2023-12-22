from tkinter import *

root = Tk()

def myclick():
    myLabel = Label(root, text = "You Clicked")
    myLabel.pack()
    
myButton = Button(root, text = "Click here",command = myclick)
myButton.pack()

root.mainloop()