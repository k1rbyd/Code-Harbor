from tkinter import *

root = Tk()

myLabel = Label(root, text="hii")
myLabel1 = Label(root, text="bye")

#for positoning we use GRID, rows & columns

myLabel.grid(row=0,column=0)
myLabel1.grid(column=0, row=1)

root.mainloop() 