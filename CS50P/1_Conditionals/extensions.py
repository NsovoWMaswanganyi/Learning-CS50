#A program that determines the media type of a file due to its extension.

file_name= input("File name: ")

if ".gif" in file_name:
    print("image/gif")

elif ".jpg" in file_name:
    print("image/jpeg")

elif ".jpeg" in file_name:
    print("image/jpeg")

elif ".png" in file_name:
    print("image/png")

elif ".pdf" in file_name:
    print("application/pdf")

elif ".txt" in file_name:
    print("application/text")

elif ".zip" in file_name:
    print("compressed file")
else:
    print("application/octet-stream")