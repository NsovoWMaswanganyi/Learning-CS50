def main():
    time = input("What time is it? ")

    time = convert(time)

    if 7<=time<=8:
        print("breakfast time")

    elif 12<=time<=13:
        print("lunch time")

    elif 18<=time<=19:
        print("dinner time")

def convert(time):
    #splits time where there is a colon
    hour, minutes = time.split(":")
    hour = float(hour)

    minutes = float(minutes)

    new_time = hour + (minutes/60)

    return new_time

if __name__ == "__main__":
    main()