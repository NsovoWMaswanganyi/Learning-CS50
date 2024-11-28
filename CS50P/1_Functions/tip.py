
#finished code
def main():
    dollars = dollars_to_float(input("How much was the meal? "))
    percent = percent_to_float(input("What percentage would you to tip? "))
    tip = dollars * percent
    print(f"Leave ${tip:.2f}")


def dollars_to_float(d):
    d = d.replace("$","")
    x = float(d)
    return x

def percent_to_float(p):
    p = p.replace("%","")
    y = float(p)
    y = y/100
    return y

main()
