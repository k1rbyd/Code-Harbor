import math
length = int(input("Enter the length of the ladder:"))
d = int(input("Enter the angle of inclination:"))
r = math.radians(d)
s=math.sin(r)
height = length*s
print(height)