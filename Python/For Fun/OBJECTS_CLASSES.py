class vehicle:
    def info(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

car1 = vehicle()
car1.name = 'Fer'
car1.color = 'red'
car1.kind = 'convertible'
car1.value = 60000

car2 = vehicle()
car2.name = 'Jump'
car2.color = 'blue'
car2.kind = 'truck'
car2.value = 10000

print(vehicle.info(car1))
print(vehicle.info(car2))