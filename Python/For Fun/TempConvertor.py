class Solution:
    def temp():
        t = float(input("Enter the temperature you want to convert[in Celsius]: "))
        k = t + 273.15
        f = t * 1.8 + 32
        print("The inputed temperature is %.2fK and %.2f Fahrenheit." % (k,f))

Solution.temp()