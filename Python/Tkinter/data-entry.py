from tkinter import*

root = Tk()

e = Entry(root)
e.pack()

# we can change the size, width and stuff

e1 = Entry(root,width=100)
e1.pack()

# we can change the color of it too

e2 = Entry(root, fg = "white", bg = "black")
e2.pack()

# we can also change the border width

e3 = Entry(root, borderwidth=100)
e3.pack()


# to get info, we use the code .get()
# to display primary info, we can use this

e.insert(0,"Enter info")

def myclick():
    myLabel = Label(root, text = e.get())
    myLabel.pack()
    
myButton = Button(root, text = "Enter Your Name",command = myclick)
myButton.pack()

root.mainloop()