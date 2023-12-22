from tkinter import*

# to import pics in the form of png and other stuff, we have to use
from PIL import imageTk, Image

root = Tk()

# to add an icon and replace the existing icon
root.iconbitmap('c:/Users/kirby/Downloads/sample.ico')

# to add an exit button, we must add the command {root.quit}
button_quit = Button(root, text = "Exit Program", command = root.quit)
button_quit.pack()

root.mainloop()