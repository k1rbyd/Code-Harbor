class NumberHolder:
	#a package used to assign values to variables , like '7' here
   def __init__(self, number):
       self.number = number

   def returnNumber(self):
       return self.number

var = NumberHolder(7)
print(var.returnNumber()) #Prints '7'