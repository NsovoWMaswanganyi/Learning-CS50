#a program that is a math interpreter for users

expression = input("Expression: ")

#we need a way to split the expression into 3 parts, namely x y z, convert x and y to ints, and use y as a conditional decider.

#This will the expression into 3 parts, and assign them to x,y,z respectively.
x, y, z = expression.split(" ")

#Convert x and z into floats
x = float(x)
z = float(z)

if y== "+":
    #Converts to 2 decimals
    print("{:.1f}".format(x+z)) 

elif y== "-":
    #Converts to 2 decimals
    print("{:.1f}".format(x-z))

elif y== "*":
    #Converts to 2 decimals
    print("{:.1f}".format(x*z))

elif y== "/":
    #Converts to 2 decimals
    print("{:.1f}".format(x/z))