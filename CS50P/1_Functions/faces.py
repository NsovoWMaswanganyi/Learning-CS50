#Unfinished code
#I'm using convert to convert an emoticon into an emoji
def convert(user):
    #I'm looking for the emoticon using the in keyword
    if ":)" in user:
        # user = user + "🙂" #if the emoticon is found, then i'm concatenating the required emoji to the string
        user = user.replace(" :)"," 🙂") # Since i cant have the emoticon aswell as the emoji, i'm replacing the emoticon with an empty string

    if ":(" in user:
        # user = user +"😐"
        user = user.replace(" :("," 😐")
    return user

def main():
    user = input("")
    user = convert(user)
    print(user)

main()
