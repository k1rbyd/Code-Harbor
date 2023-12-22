from tkinter import *

root = Tk()

myButton = Button(root, text = "Click Here")

# we can change the state, now we cant click on this button
myButton1 = Button(root, text = "Dont Click Here", state=DISABLED) 

# to change the sizes, we can use padx / pady, example
myButton2 = Button(root, text = " TEST",padx=50)
myButton3 = Button(root, text = " TEST",pady=50)

# we can change the button and the text color too, button : bg ; text : fg
myButton4 = Button(root, text = "HEELLLOO",fg="white",bg="black")

myButton.pack()
myButton1.pack()
myButton2.pack()
myButton3.pack()
myButton4.pack()

root.mainloop()