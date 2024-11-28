#Code for vending machine

amount_due = 50
while (amount_due > 0):

    print("Amount Due:",amount_due)
    coin = eval(input("Insert coin: "))

    if coin == 25 or coin==10 or coin==5:
        amount_due = amount_due - coin
    # else:
    #     print("Expected coins are: 5, 10, 25")

change = -1 * amount_due

print("Change Owed:",change)