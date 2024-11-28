#finished code
#A program that is going to change camelCase into snake_case

userInput = input("camelCase: ")

#I need a way to check if a string has an uppercase
print("snake_case:",end="")
for x in userInput:
    #checks if a single character is of upper case
    if x.islower()==False:
        #Replaces the UpperCase char with an underscore and a lowercase version of the char
        x = x.replace(x, x.lower())
        
        x = "_" + x

        
    print(x, end="")

print()

